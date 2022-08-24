#pragma once

#include <string>

class Creature 
{
private:
	std::string sName; 
	char cSymbol; 
	int iHealth; 
	int iDamage; 
	int iGold; 
public:
	std::string GetName();
	char GetSymbol();
	int GetHealth();
	int GetDamage();
	int GetGold();
};

