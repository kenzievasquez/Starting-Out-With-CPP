#include <iostream>
#include <string>
#include <map>
#include <list>

int main()
{
    std::map<std::string, std::list<std::string>> pokedex;
    

    std::list<std::string> pikachuAttacks{ "Thunder Shock", "Tail Whip", "Volt Tackle" };
    std::list<std::string> charmanderAttacks{ "Ember", "Flamethrower", "Fire Spin" };
    std::list<std::string> chikoritaAttacks{ "Tackle", "Razor Leaf", "Poison Power" };

    pokedex.insert(std::pair<std::string, std::list<std::string>>("Pikachu", pikachuAttacks));
    pokedex.insert(std::pair<std::string, std::list<std::string>>("Charmander", charmanderAttacks));
    pokedex.insert(std::pair<std::string, std::list<std::string>>("Chikorita", chikoritaAttacks));


    for (const auto& pair : pokedex)
    {
        std::cout << pair.first << " - ";

        for (const auto& attack : pair.second)
            std::cout << attack << ", ";
        std::cout << "\n";
    }



    std::cin.get();
    return 0;
}
