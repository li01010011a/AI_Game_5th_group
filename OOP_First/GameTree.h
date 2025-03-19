#pragma once
#include <vcclr.h>
#include <iostream>
#include <cstdlib> 
#include <vector>
#include <string>
using namespace System::Drawing;

class GameTree {
public:
    std::vector<int> data;
    std::vector<GameTree*> children;
    GameTree(std::vector<int> data) {
        this->data = data;
    }
    void AddChild(GameTree* child);
    void PrintGameTree(Graphics^ graphics, GameTree* node, int level, int width, int xOffset);
    void FullfillGameTreeBackup(GameTree* node, std::vector<int> data);
    void GameFlow(GameTree* node);
    void GameTreeCertainLevel(GameTree* node, std::vector<int> data, int level);
};

