#include "Demon.h"
#include <iostream>

namespace cs_creature {
    Demon::Demon() : Creature() {}
    Demon::Demon(int newStrength, int newHitpoints) : Creature(newStrength, newHitpoints) {}

    std::string Demon::getSpecies() const { return "demon"; }

    int Demon::getDamage() const {
        int damage = Creature::getDamage();
        std::cout << " attacks for " << damage << " points!" << std::endl;
        if (rand() % 100 * 0.01 < 0.25) {
            std::cout << "Demonic attack inflicts 50 additional damage points!" << std::endl;
            damage += 50;
        }
        return damage;
    }
}
