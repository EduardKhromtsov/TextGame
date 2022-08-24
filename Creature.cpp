#include <iostream>

#include "Creature.h"

std::string Creature::GetName()
{
	return sName;
}

Creature::Creature(const std::string sName, const char cSymbol, const int iHealth, const int iDamage, const int iGold)
{
	this->sName = sName;
	this->cSymbol = cSymbol;
	this->iHealth = iHealth;
	this->iDamage = iDamage;
	this->iGold = iGold;
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

void Creature::ReduceHealth(const int iReducedHealth)
{
	iHealth -= iReducedHealth;
}

bool Creature::IsDead()
{
	return iHealth <= 0;
}

void Creature::AddGold(const int iAddingGold)
{
	iGold += iAddingGold;
}
