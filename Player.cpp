#include "Player.h"

Player::Player(std::string sName) : Creature(sName, '@', 10, 1, 0)
{

}

void Player::LevelUp()
{
	++iLevel;
	++iDamage;
}

unsigned short int Player::GetLevel()
{
	return iLevel;
}
