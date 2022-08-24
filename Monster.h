#pragma once
#include "Creature.h"

class Monster : public Creature
{
public:
	enum class Type
	{
		Dragon,
		Orc,
		Slime,
		max_types
	};
};

