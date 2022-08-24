
#include <iostream>

#include "Creature.h";


int main()
{
    Creature o("orc", 'o', 4, 2, 10);

    o.AddGold(5);
    o.ReduceHealth(1);
    std::cout << "The " << o.GetName() << " has " << o.GetHealth() << " health and " << o.GetGold() << " gold.\n";
}


