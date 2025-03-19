#pragma once
#include <vcclr.h>
#include <iostream>
#include <cstdlib> 
#include <vector>
#include <string>
#include "GameTree.h"
using namespace System::Drawing;

class Game
{
public:
	void PrintIntVector(Graphics^ graphics, std::vector<int> randoms, int width, int height, int R, int G, int B);
	std::vector<int> GenerateRandomNums(int size);
	int random_array_size;
	std::vector<int> randoms;
	void PrintStringAsCharArray(Graphics^ graphics, System::String^ s, int width, int height);
};

