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

bool Player::HasWon()
{
	return iLevel >= 20;
}

void Player::Health(const int iHealth)
{
	this->iHealth += iHealth;
}

void Player::Power()
{
	++iDamage;
}

void Player::Poison()
{
	--iHealth;
}