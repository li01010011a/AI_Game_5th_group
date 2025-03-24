#pragma once
#include <vcclr.h>
#include <iostream>
#include <cstdlib> 
#include <vector>
#include <string>
#include "Player.h"
using namespace System::Drawing;

class GameTree {
public:
    std::vector<int> data;
    std::vector<GameTree*> children;
    int nodeValueForAI = 0;
	int nodeValueForHuman = 0;
    int isRoot;
    GameTree* current_node;
	GameTree* parent_node;
    int isWinPath = 0;
    int initialVectorSize = 0;
	//Player* human, * ai, * player;
	std::vector<int> current_data;
    GameTree(std::vector<int> data) {
        this->data = data;
    }
    //void AddNodeValue(GameTree* node, Player* player);
	//void MinusNodeValue(GameTree* node, Player* player);
    void AddChild(GameTree* child);
    void PrintGameTree(Graphics^ graphics, GameTree* node, int level, int width, int xOffset);
    void PrintGameTreeUserScore(Graphics^ graphics, GameTree* node, int level, int width, int xOffset);
    void FullfillGameTreeBackup(GameTree* node, std::vector<int> data);
	void FullfillGameTreeWithScores(GameTree* node, std::vector<int> data, int firstPlayer, int currentNodeValueForHuman, int currentNodeValueForAI); //0 - human, 1 - ai
    void FullfillGameTreeWithScoresMiniMax(GameTree* node, std::vector<int> data, int firstPlayer, int currentNodeValueForHuman, int currentNodeValueForAI); //0 - human, 1 - ai
    void GameFlow(GameTree* node);
	void MarkWinNodes(GameTree* node);
	void MarkWinPath(GameTree* node);
    void GameTreeCertainLevel(GameTree* node, std::vector<int> data, int level);
    //void GameTreeCertainLevelWithScores(GameTree* node, std::vector<int> data, int level, int firstPlayer, int currentNodeValueForHuman, int currentNodeValueForAI);
    void GameTreeCertainLevelWithScoresMiniMax(GameTree* node, std::vector<int> data, int level, int firstPlayer, int currentNodeValueForHuman, int currentNodeValueForAI);
    void GameTreeCertainLevelWithScoresAlphaBeta(GameTree* node, std::vector<int> data, int level, int firstPlayer, int currentNodeValueForHuman, int currentNodeValueForAI);
};

