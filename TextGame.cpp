
#include <iostream>

#include "Creature.h";
#include "Player.h";


int main()
{
    std::string sPlayerName;

    std::cout << "Enter your name: ";
    std::cin >> sPlayerName;

    Player p(sPlayerName);

    std::cout << "Welcome, " << p.GetName() << "\n";
    std::cout << "You have " << p.GetHealth() << " health and " << p.GetGold() << " gold\n";
    
}


