#include "Game.h"
#include <vcclr.h>
#include <iostream>
#include <cstdlib> 
#include <vector>
#include <string>
using namespace System;

void Game::PrintIntVector(Graphics^ graphics, std::vector<int> randoms, int width, int height, int R, int G, int B) {
	Font font("Arial", 30);
	SolidBrush brush(Color::FromArgb(R, G, B));

	System::String^ s = "Random Array: ";
	interior_ptr<const Char> ppchar = PtrToStringChars(s);

	for (int i = 0; i < s->Length; i++) {
		wchar_t c = s[i];
		SolidBrush brush(Color::FromArgb(R += 10, G, B));
		graphics->DrawString(c.ToString(), % font, % brush, width += 20, height);
	}
	
	for (int i = 0; i < randoms.size(); i++) {
		graphics->DrawString(randoms[i].ToString(), % font, % brush, width += 20, height);
	}
	
}

void Game::PrintStringAsCharArray(Graphics^ graphics, System::String^ s, int width, int height){
	Font font("Arial", 30);
	int R = 25, G = 70, B = 90;
	SolidBrush brush(Color::FromArgb(R, G, B));

	interior_ptr<const Char> ppchar = PtrToStringChars(s);

	for (int i = 0; i < s->Length; i++) {
		wchar_t c = s[i];
		SolidBrush brush(Color::FromArgb(R, G, B));
		graphics->DrawString(c.ToString(), % font, % brush, width += 20, height);
	}
}

std::vector<int> Game::GenerateRandomNums(int size) {
	std::vector<int> randoms;
	for (int i = 0; i < size; i++) {
		int random = rand() % 6 + 1;
		randoms.push_back(random);
	}
	return randoms;
}