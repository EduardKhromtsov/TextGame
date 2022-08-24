
#include <iostream>

#include "Creature.h";
#include "Player.h";
#include "Monster.h";


int main()
{
  
    Monster m{Monster::Type::Orc};
    std::cout << "A " << m.GetName() << " (" << m.GetSymbol() << ") was created.\n";
    
}


