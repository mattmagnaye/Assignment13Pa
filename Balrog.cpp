#include "Balrog.h"
#include <iostream>

namespace cs_creature {
    Balrog::Balrog() : Demon() {}
    Balrog::Balrog(int newStrength, int newHitpoints) : Demon(newStrength, newHitpoints) {}

    std::string Balrog::getSpecies() const { return "Balrog"; }

    int Balrog::getDamage() const {
        std::cout << "The " << getSpecies();
        int damage = (rand() % getStrength()) + 1;
        int damage2 = (rand() % getStrength()) + 1;
        std::cout << " attacks for " << damage << " points!" << std::endl;
        std::cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << std::endl;
        damage += damage2;
        return damage;
    }
}
