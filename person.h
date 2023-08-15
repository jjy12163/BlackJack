//person.h
#ifndef PERSON_H
#endif PERSON_H
#pragma once

#include "card.h"
#include "Casino.h"

using namespace std;

class Player {
private:
	string name;
	Card* cards;
	bool* win;
	double budget;
public:
	Player(string name, double budget);
	Player(string name, Card* cards, bool* win, double budget);




	//이름 입/출력
	//budget 입/출력
	void setName(string name);
	string getName() const;
	void setBudget(double budget);
	double getBudget() const;



};

class Dealer {
private:
	string name;
	Card* cards;

public:
	Dealer(string name, double budget);
	Dealer(string name, Card* cards, bool* win, double budget);
	//이름 입/출력
	//budget 입/출력
	void setName(string name);
	string getName() const;
	void setBudget(double budget);
	double getBudget() const;
};