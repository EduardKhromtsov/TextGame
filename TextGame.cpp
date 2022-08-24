
#include <iostream>
#include <ctime>

#include "Creature.h";
#include "Player.h";
#include "Monster.h";

void MonsterKilled(Player &player, Monster &monster)
{
    std::cout << "You killed the " << monster.GetName() << ".\n";
    player.LevelUp();

    std::cout << "You are now level " << player.GetLevel() << ".\n";
    std::cout << "You found " << monster.GetGold() << " gold.\n";
    player.AddGold(monster.GetGold());

    if (rand() % 101 <= 30)
    {
        std::cout << "You found a mythical potion! Do you want to drink it? [y/n]: ";
        char cChoice;
        std::cin >> cChoice;

        if (cChoice == 'y' || cChoice == 'Y')
        {
            unsigned short int iChoice = rand() % 3;

            if (iChoice == 0)
            {
                unsigned short int iHealthChoice = rand() % 3;

                if (iChoice == 2)
                {
                    std::cout << "You drank a health potion (+5 hp)" << "\n";
                    player.Health(5);
                }
                else
                {
                    std::cout << "You drank a health potion (+2 hp)" << "\n";
                    player.Health(2);
                }
            }

            if (iChoice == 1)
            {
                std::cout << "You drank a power potion (+1 damage)" << "\n";
                player.Power();
            }

            if (iChoice == 2)
            {
                std::cout << "You drank a poison potion (-1 hp)" << "\n";
                player.Poison();
            }
        }
    }
}

void AttackPlayer(Monster &monster, Player &player)
{
    if (monster.IsDead())
        return;

    player.ReduceHealth(monster.GetDamage());
    std::cout << "The " << monster.GetName() << " hit you for " << monster.GetDamage() << " damage.\n";
}

void AttackMonster(Player &player, Monster &monster)
{
    if (player.IsDead())
        return;

    std::cout << "You hit the " << monster.GetName() << " for " << player.GetDamage() << " damage\n";
    monster.ReduceHealth(player.GetDamage());

    if (monster.IsDead())
        MonsterKilled(player, monster);
    
}

void FightMonster(Player &player)
{
    Monster monster(Monster::GetRandomMonster());

    std::cout << "You have encountered a " << monster.GetName() << " (" << monster.GetSymbol() << ").\n";

    while (!monster.IsDead() && !player.IsDead())
    {
        std::cout << "(R)un or (F)ight: ";
        
        char cInput;

        std::cin >> cInput;

        if (cInput == 'R' || cInput == 'r')
        {
            if (rand() % 2 == 0)
            {
                std::cout << "You successfully fled.\n";
                break;
            }
            else
            {
                std::cout << "You failed to flee.\n";
                AttackPlayer(monster, player);
                continue;
            }
        }

        if (cInput == 'F' || cInput == 'f')
        {
            AttackMonster(player, monster);
            AttackPlayer(monster, player);
        }
    }
}

int main()
{
    srand(time(NULL));

    std::string sPlayerName;
  
    std::cout << "Enter your name: ";
    std::cin >> sPlayerName;

    Player player(sPlayerName);
    
    std::cout << "Welcome, " << player.GetName() << "\n";

    while (!player.HasWon() && !player.IsDead())
    {
        FightMonster(player);
    }

    if (player.IsDead())
        std::cout << "You died at level " << player.GetLevel() << " and with " << player.GetGold() << " gold.\n";
    else
        std::cout << "You won the game with " << player.GetGold() << " gold!\n";
  
    return 0;
    
}


