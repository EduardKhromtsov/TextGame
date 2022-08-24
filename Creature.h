#pragma once

#include <string>

class Creature 
{
protected:
	std::string sName; 
	char cSymbol; 
	int iHealth; 
	int iDamage; 
	int iGold; 
public:
	Creature(const std::string sName, const char cSymbol, const int iHealth, const int iDamage, const int iGold);
	std::string GetName();
	char GetSymbol();
	int GetHealth();
	int GetDamage();
	int GetGold();
	void ReduceHealth(const int iReducedHealth);
	bool IsDead();
	void AddGold(const int iAddingGold);
};

