#include "Elf.h"
#include <iostream>

namespace cs_creature {
    Elf::Elf() : Creature() {}
    Elf::Elf(int newStrength, int newHitpoints) : Creature(newStrength, newHitpoints) {}

    std::string Elf::getSpecies() const { return "elf"; }

    int Elf::getDamage() const {
        int damage = Creature::getDamage();
        std::cout << "The " << getSpecies() << " attacks for " << damage << " points!" << std::endl;
        if (rand() % 100 * 0.01 < 0.5) {
            std::cout << "Magical attack inflicts " << damage << " additional damage points!" << std::endl;
            damage *= 2;
        }
        return damage;
    }
}
