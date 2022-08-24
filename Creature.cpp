#include <iostream>

#include "Creature.h"

std::string Creature::GetName()
{
	return sName;
}

char Creature::GetSymbol()
{
	return cSymbol;
}

int Creature::GetHealth()
{
	return iHealth;
}

int Creature::GetDamage()
{
	return iDamage;
}

int Creature::GetGold()
{
	return iGold;
}
