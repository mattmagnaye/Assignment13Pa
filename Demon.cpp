#include "Demon.h"
#include <iostream>

namespace cs_creature {
    const double Demon::DEMONIC_ATTACK_PROBABILITY = 0.25;
    const int Demon::DEMONIC_BONUS_DAMAGE = 50;

    Demon::Demon() : Creature() {}
    Demon::Demon(int newStrength, int newHitpoints) : Creature(newStrength, newHitpoints) {}

    std::string Demon::getSpecies() const { return "Demon"; }

    int Demon::getDamage() const {
        int damage = Creature::getDamage();
        std::cout << "The " << getSpecies();
        if (rand() % 100 * 0.01 < DEMONIC_ATTACK_PROBABILITY) {
            damage += DEMONIC_BONUS_DAMAGE;
            std::cout << " attacks for " << damage << " points!" << std::endl;
            std::cout << "Demonic attack inflicts " << DEMONIC_BONUS_DAMAGE << " additional damage points!" << std::endl;
        } else {
            std::cout << " attacks for " << damage << " points!" << std::endl;
        }
        return damage;
    }
}
