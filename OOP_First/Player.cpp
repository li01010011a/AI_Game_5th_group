#include "Player.h"
#include <string>
#include "Game.h"
#include "GameTree.h"

void Player::AddPoint() {
	score += 1;
}
void Player::MinusPoint() {
	score -= 1;
}