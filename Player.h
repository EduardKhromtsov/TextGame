#pragma once
#include "Creature.h"

class Player : public Creature
{
private:
	unsigned short int iLevel = 1;
public:
	Player(std::string sName);
	void LevelUp();
	unsigned short int GetLevel();
	bool HasWon();
};

