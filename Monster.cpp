#include "Monster.h"

const Creature& Monster::GetDefaultCreature(Type type)
{
	static std::array<Creature, static_cast<std::size_t>(Type::max_types)> MonsterData
	{
	  { 
		{ "Dragon", 'D', 20, 4, 100 },
		{ "Orc", 'o', 4, 2, 25 },
		{ "Slime", 's', 1, 1, 10 } 
	  }
	};

	return MonsterData.at(static_cast<std::size_t>(type));
}

Monster Monster::GetRandomMonster()
{
	unsigned short int iNumber = rand() % static_cast<int>(Type::max_types);

	return static_cast<Type>(iNumber);
}

Monster::Monster(Type type) : Creature(GetDefaultCreature(type))
{

}

