#pragma once

#include <string>

class Creature // Создаем класс существа.
{
private:
	std::string sName; // Имя.
	char cSymbol; // Символ.
	int iHealth; // Количество здоровья.
	int iDamage; // Количество урона.
	int iGold; // Количество золота.
public:
	std::string GetName();
	char GetSymbol();
	int GetHealth();
	int GetDamage();
	int GetGold();
};

