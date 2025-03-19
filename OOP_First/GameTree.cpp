#include "GameTree.h"
#include "Game.h"
#include <vcclr.h>
#include <iostream>
#include <cstdlib> 
#include <vector>
#include <string>
using namespace System;


void GameTree::AddChild(GameTree* child) {
    children.push_back(child);
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

void GameTree::FullfillGameTreeBackup(GameTree* node, std::vector<int> data) {
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
        FullfillGameTreeBackup(child, child->data);
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

void GameTree::GameFlow(GameTree* node) {
	for (GameTree* child : node->children) {
		GameFlow(child);
	}
}