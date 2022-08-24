
#include <iostream>
#include <ctime>

#include "Creature.h";
#include "Player.h";
#include "Monster.h";


int main()
{
    srand(time(NULL));

    rand();
  
    for (int i = 0; i < 10; ++i)
    {
        Monster m{ Monster::GetRandomMonster() };
        std::cout << "A " << m.GetName() << " (" << m.GetSymbol() << ") was created.\n";
    }
    
}


