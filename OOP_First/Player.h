#pragma once
#include <string>
#include "Game.h"
#include "GameTree.h"

class Player
{
public:
	int score;
	bool isFirstPlayer = 0; //1 for Max Player
	bool isCurrentPlayer;
	int winCount=0;
	Player(int score, bool isFirstPlayer) {
		this->score = score;
		this->isFirstPlayer = isFirstPlayer;
	}
	void AddPoint();
	void MinusPoint();
};

