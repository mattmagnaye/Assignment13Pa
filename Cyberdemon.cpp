#include "Cyberdemon.h"
#include <iostream>

namespace cs_creature {
    Cyberdemon::Cyberdemon() : Demon() {}
    Cyberdemon::Cyberdemon(int newStrength, int newHitpoints) : Demon(newStrength, newHitpoints) {}

    std::string Cyberdemon::getSpecies() const { return "Cyberdemon"; }

    int Cyberdemon::getDamage() const {
        std::cout << "The " << getSpecies();
        int damage = (rand() % getStrength()) + 1;
        std::cout << " attacks for " << damage << " points!" << std::endl;
        if (rand() % 100 * 0.01 < 0.25) {
            std::cout << "Demonic attack inflicts 50 additional damage points!" << std::endl;
            damage += 50;
        }
        return damage;
    }
}
