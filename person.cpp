#include "person.h"

Player::Player(string name, double budget) {
	this->name = name;
	this->budget = budget;

}
Player::Player(string name, Card* cards, bool* win, double budget) {
	this->name = name;
	this->budget = budget;

}

