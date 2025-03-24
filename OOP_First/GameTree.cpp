#include "GameTree.h"
#include "Game.h"
#include "Player.h"
#include <vcclr.h>
#include <iostream>
#include <cstdlib> 
#include <vector>
#include <string>
using namespace System;


void GameTree::AddChild(GameTree* child) {
    children.push_back(child);
}

void GameTree::PrintGameTreeUserScore(Graphics^ graphics, GameTree* node, int level, int width, int xOffset)
{
    Font font("Arial", 9);
    int R = (level % 2 == 0 ? 255 : 0), G = 0, B = (level % 2 == 0 ? 0 : 255);

    SolidBrush brush(Color::FromArgb(R, G, B));
    SolidBrush brush_score(Color::FromArgb(0, 255, 0));
    SolidBrush brush_win(Color::FromArgb(100,140,180));
    int height = 10 + level * 20;

    graphics->DrawString("With That Color Marked Win Path(Human) If Exists", % font, % brush_win, 50, 200);
    graphics->DrawString(node->nodeValueForAI.ToString(), % font, % brush_score, width + xOffset - 7, height);
    //graphics->DrawString(node->alphaBetaValue.ToString(), % font, % brush_score, width + xOffset - 7, height + 10);
    graphics->DrawString(node->miniMaxValue.ToString(), % font, % brush_score, width + xOffset - 7+10, height + 10);

    for (int i = 0; i < node->data.size(); i++) {
        
        graphics->DrawString(node->data.at(i).ToString(), % font, node->isWinPath == 1 ? % brush_win : % brush, width + xOffset + i * 5, height);
        graphics->DrawString((level % 2 == 0) ? "---Max" : "---Min", % font, % brush, 750, height);
        
    }
    graphics->DrawString(node->nodeValueForHuman.ToString(), % font, % brush_score, width + xOffset + node->data.size() * 5+2, height);
    int childWidth = 0;
    for (GameTree* child : node->children) {
        int parts = node->children.size() + 2;
        xOffset += childWidth;
        childWidth = (width) * 2 / parts;

        PrintGameTreeUserScore(graphics, child, level + 1, childWidth, xOffset);
    }
}

void GameTree::PrintGameTree(Graphics^ graphics, GameTree* node, int level, int width, int xOffset)
{
    Font font("Arial", 9);
    //SolidBrush brush(Color::Black);  
    int R = (level%2==0?255:0), G = 0, B = (level % 2 == 0 ? 0 : 255);
    
	SolidBrush brush(Color::FromArgb(R, G, B));
    int height = 10 + level * 20;

    for (int i = 0; i < node->data.size(); i++) {
        graphics->DrawString(node->data.at(i).ToString(), % font, % brush, width + xOffset  + i*5, height);
        graphics->DrawString((level%2==0)?"---Max":"---Min", % font, % brush, 750, height);

    }
    int childWidth=0;
    for (GameTree* child : node->children) {
		int parts = node->children.size() + 2;
        xOffset += childWidth;
        childWidth = (width)*2/parts; 
        
        PrintGameTree(graphics, child, level + 1, childWidth, xOffset);
    }
}

void GameTree::FullfillGameTreeWithScoresMiniMax(GameTree* node, std::vector<int> data, int firstPlayer, int currentNodeValueForHuman, int currentNodeValueForAI) {
    //firstPlayer = 0;
    for (int i = 0; i < data.size() - 1; i += 2) {
        std::vector<int> temporary = data;
        temporary[i] = temporary[i] + temporary[i + 1];
        if (temporary[i] > 6) {
            temporary[i] = temporary[i] - 6;
        }
        temporary.erase(temporary.begin() + i + 1);
        GameTree* PositiveChild = new GameTree(temporary);

        if (firstPlayer == 0) { // 0 - human
            PositiveChild->nodeValueForHuman = 1 + currentNodeValueForHuman;
            PositiveChild->nodeValueForAI = currentNodeValueForAI;
        }
        else {
            PositiveChild->nodeValueForAI = 1 + currentNodeValueForAI;
            PositiveChild->nodeValueForHuman = currentNodeValueForHuman;
        }
        PositiveChild->parent_node = node;
        node->AddChild(PositiveChild);
    }
    if (data.size() % 2 == 1 && data.size() != 1) {
        std::vector<int> temporary = data;
        temporary.erase(temporary.begin() + data.size() - 1);
        GameTree* NegativeChild = new GameTree(temporary);

        if (firstPlayer == 0)  {
            NegativeChild->nodeValueForHuman = currentNodeValueForHuman ;
            NegativeChild->nodeValueForAI = currentNodeValueForAI -1;
            NegativeChild->parent_node = node;
            node->AddChild(NegativeChild);
        }
        
    }
    if (firstPlayer == 0) {
        firstPlayer = 1;
    }
    else {
        firstPlayer = 0;
    }
    for (GameTree* child : node->children) {
        currentNodeValueForAI = child->nodeValueForAI;
        currentNodeValueForHuman = child->nodeValueForHuman;
        FullfillGameTreeWithScoresMiniMax(child, child->data, firstPlayer, currentNodeValueForHuman, currentNodeValueForAI);
    }
}

void GameTree::FullfillGameTreeWithScores(GameTree* node, std::vector<int> data, int firstPlayer, int currentNodeValueForHuman, int currentNodeValueForAI) {
    //firstPlayer = 0;
    for (int i = 0; i < data.size() - 1; i += 2) {
        std::vector<int> temporary = data;
        temporary[i] = temporary[i] + temporary[i + 1];
        if (temporary[i] > 6) {
            temporary[i] = temporary[i] - 6;
        }
        temporary.erase(temporary.begin() + i + 1);
		GameTree* PositiveChild = new GameTree(temporary);
        
		if (firstPlayer == 0) {
			PositiveChild->nodeValueForHuman = 1 + currentNodeValueForHuman;
			PositiveChild->nodeValueForAI = currentNodeValueForAI;    
		}
        else {
			PositiveChild->nodeValueForAI = 1 + currentNodeValueForAI;
			PositiveChild->nodeValueForHuman = currentNodeValueForHuman;    
        }
		PositiveChild->parent_node = node;
        node->AddChild(PositiveChild);
    }
    if (data.size() % 2 == 1 && data.size() != 1) {
        std::vector<int> temporary = data;
        temporary.erase(temporary.begin() + data.size() - 1);
		GameTree* NegativeChild = new GameTree(temporary);
        
        if (firstPlayer == 0) {
            NegativeChild->nodeValueForAI = currentNodeValueForAI - 1;
			NegativeChild->nodeValueForHuman = currentNodeValueForHuman;
        }
        else {
            NegativeChild->nodeValueForHuman = currentNodeValueForHuman - 1;
			NegativeChild->nodeValueForAI = currentNodeValueForAI;
        }
		NegativeChild->parent_node = node;
        node->AddChild(NegativeChild);
    }
    if (firstPlayer == 0) {
        firstPlayer = 1;
    }
    else {
        firstPlayer = 0;
    }
    for (GameTree* child : node->children) {
		currentNodeValueForAI = child->nodeValueForAI;
		currentNodeValueForHuman = child->nodeValueForHuman;
        FullfillGameTreeWithScores(child, child->data, firstPlayer, currentNodeValueForHuman, currentNodeValueForAI);
    }
}

void GameTree::FullfillGameTree(GameTree* node, std::vector<int> data) {
    for (int i = 0; i < data.size()-1; i += 2) {
        std::vector<int> temporary = data;
        temporary[i] = temporary[i] + temporary[i + 1];
        if (temporary[i] > 6) {
            temporary[i] = temporary[i] - 6;
        }
        temporary.erase(temporary.begin() + i + 1);
        node->AddChild(new GameTree(temporary));
    }
    if (data.size() % 2 == 1 && data.size()!=1) {
		std::vector<int> temporary = data;
		temporary.erase(temporary.begin() + data.size() - 1);
		node->AddChild(new GameTree(temporary));
    }
    for (GameTree* child : node->children) {
        FullfillGameTree(child, child->data);
    }
}

void GameTree::GameTreeCertainLevelWithScoresAlphaBeta(GameTree* node, std::vector<int> data, int level, int firstPlayer, int currentNodeValueForHuman, int currentNodeValueForAI) {
    //firstPlayer = 0;
    for (int i = 0; i < data.size() - 1; i += 2) {
        std::vector<int> temporary = data;
        temporary[i] = temporary[i] + temporary[i + 1];
        if (temporary[i] > 6) {
            temporary[i] = temporary[i] - 6;
        }
        temporary.erase(temporary.begin() + i + 1);
        GameTree* PositiveChild = new GameTree(temporary);

        if (firstPlayer == 0) { // 0 - human
            PositiveChild->nodeValueForHuman = 1 + currentNodeValueForHuman;
            PositiveChild->nodeValueForAI = currentNodeValueForAI;
        }
        else {
            PositiveChild->nodeValueForAI = 1 + currentNodeValueForAI;
            PositiveChild->nodeValueForHuman = currentNodeValueForHuman;
        }
        PositiveChild->parent_node = node;
        node->AddChild(PositiveChild);
    }
    if (data.size() % 2 == 1 && data.size() != 1) {
        std::vector<int> temporary = data;
        temporary.erase(temporary.begin() + data.size() - 1);
        GameTree* NegativeChild = new GameTree(temporary);

        if (firstPlayer == 0) {
            NegativeChild->nodeValueForHuman = currentNodeValueForHuman;
            NegativeChild->nodeValueForAI = currentNodeValueForAI - 1;
            NegativeChild->parent_node = node;
            node->AddChild(NegativeChild);
        }

    }
    if (firstPlayer == 0) {
        firstPlayer = 1;
    }
    else {
        firstPlayer = 0;
    }
    if (level > 0) {
        level -= 1;
        for (GameTree* child : node->children) {
            currentNodeValueForAI = child->nodeValueForAI;
            currentNodeValueForHuman = child->nodeValueForHuman;
            GameTreeCertainLevelWithScoresAlphaBeta(child, child->data,level, firstPlayer, currentNodeValueForHuman, currentNodeValueForAI);
        }
    }
}

void GameTree::GameTreeCertainLevelWithScoresMiniMax(GameTree* node, std::vector<int> data, int level, int firstPlayer, int currentNodeValueForHuman, int currentNodeValueForAI) {
    for (int i = 0; i < data.size() - 1; i += 2) {
        std::vector<int> temporary = data;
        temporary[i] = temporary[i] + temporary[i + 1];
        if (temporary[i] > 6) {
            temporary[i] = temporary[i] - 6;
        }
        temporary.erase(temporary.begin() + i + 1);
        GameTree* PositiveChild = new GameTree(temporary);

        if (firstPlayer == 0) {
            PositiveChild->nodeValueForHuman = 1 + currentNodeValueForHuman;
            PositiveChild->nodeValueForAI = currentNodeValueForAI;
        }
        else {
            PositiveChild->nodeValueForAI = 1 + currentNodeValueForAI;
            PositiveChild->nodeValueForHuman = currentNodeValueForHuman;
        }
		PositiveChild->parent_node = node;
        node->AddChild(PositiveChild);
    }
    if (data.size() % 2 == 1 && data.size() != 1) {
        std::vector<int> temporary = data;
        temporary.erase(temporary.begin() + data.size() - 1);
        GameTree* NegativeChild = new GameTree(temporary);

        if (firstPlayer == 0) {
            NegativeChild->nodeValueForAI = currentNodeValueForAI - 1;
            NegativeChild->nodeValueForHuman = currentNodeValueForHuman;
        }
        else {
            NegativeChild->nodeValueForHuman = currentNodeValueForHuman - 1;
            NegativeChild->nodeValueForAI = currentNodeValueForAI;
        }
        NegativeChild->parent_node = node;
        node->AddChild(NegativeChild);
    }
    if (firstPlayer == 0) {
        firstPlayer = 1;
    }
    else {
        firstPlayer = 0;
    }
    if (level > 0) {
        level -= 1;
        for (GameTree* child : node->children) {
            currentNodeValueForAI = child->nodeValueForAI;
            currentNodeValueForHuman = child->nodeValueForHuman;
            GameTreeCertainLevelWithScoresMiniMax(child, child->data, level, firstPlayer, currentNodeValueForHuman, currentNodeValueForAI);
        }
    }

}

void GameTree::GameTreeCertainLevel(GameTree* node, std::vector<int> data, int level) {
    for (int i = 0; i < data.size() - 1; i += 2) {
        std::vector<int> temporary = data;
        temporary[i] = temporary[i] + temporary[i + 1];
        if (temporary[i] > 6) {
            temporary[i] = temporary[i] - 6;
        }
        temporary.erase(temporary.begin() + i + 1);
        node->AddChild(new GameTree(temporary));
    }
    if (data.size() % 2 == 1 && data.size() != 1) {
        std::vector<int> temporary = data;
        temporary.erase(temporary.begin() + data.size() - 1);
        node->AddChild(new GameTree(temporary));
    }
	if (level > 0) {
        level -= 1;
        for (GameTree* child : node->children) {
            GameTreeCertainLevel(child, child->data, level);
        }
	}
    
}

void GameTree::RateGameTreeAlphaBeta(GameTree* node, int level) {
        level += 1;
        for (GameTree* child : node->children) {
            int current = child->alphaBetaValue;
            
            RateGameTreeAlphaBeta(child, level);
            current = child->alphaBetaValue;
            if (current != -2) {
                child->parent_node->alphaBetaValue = current;
                if (current == 1 && node->alphaBetaValue == -1) {
                    if (level % 2 == 1) {
                        //max level
                        node->alphaBetaValue == current;
                    }
                    else {
                        continue;
                    }
                }
                else if (current == -1 && node->alphaBetaValue == 1) {
                    if (level % 2 == 0) {
                        node->alphaBetaValue == current; //change 1 to -1 if min level
                    }
                    else {
                        continue;
                    }
                }
                else if (node->alphaBetaValue < current) {
                    node->alphaBetaValue = current;
                }
            }
        }
}

void GameTree::RateGameTreeMiniMax(GameTree* node, int level) {
    level += 1;
    for (GameTree* child : node->children) {
        int current = child->miniMaxValue;

        RateGameTreeMiniMax(child, level);
        current = child->miniMaxValue;
        if (current != -2) {
            child->parent_node->miniMaxValue = current;
            if (current == 1 && node->miniMaxValue == -1) {
                if (level % 2 == 1) {
                    //max level
                    node->miniMaxValue == current;
                }
            }
            else if (current == -1 && node->miniMaxValue == 1) {
                if (level % 2 == 0) {
                    node->miniMaxValue == current; //change 1 to -1 if min level
                }
            }
            else if (node->miniMaxValue < current) {
                node->miniMaxValue = current;
            }
        }
    }
}

void GameTree::MarkLowestNodes(GameTree* node) { //marks lowest nodes (1, 0, -1) according to game rules
    if (node->children.size() == 0) {
        if (node->nodeValueForAI < node->nodeValueForHuman) {//human wins
            node->alphaBetaValue = 1;
            node->miniMaxValue = 1;
        }
        else if (node->nodeValueForAI == node->nodeValueForHuman) {
            node->alphaBetaValue = 0;
            node->miniMaxValue = 0;
        }
        else {
            node->alphaBetaValue = -1;
            node->miniMaxValue = -1;
        }
    }
    else {
        for (GameTree* child : node->children) {
            MarkLowestNodes(child);
        }
    }
}

void GameTree::MarkWinNodes(GameTree* node) {
	if (node->children.size() == 0) {
		if (node->nodeValueForAI < node->nodeValueForHuman) {//human wins
			node->isWinPath = 1;
			node->MarkWinPath(node);
		}
		else {
			node->isWinPath = 0;
		}
	}
	else {
		for (GameTree* child : node->children) {
            MarkWinNodes(child);
		}
	}
}

void GameTree::MarkWinPath(GameTree* node) {
		if (node->isRoot != 1) {
			node->isWinPath = 1;
			MarkWinPath(node->parent_node);
		}
}