#include "Human.h"
#include <iostream>

namespace cs_creature {
    Human::Human() : Creature() {}
    Human::Human(int newStrength, int newHitpoints) : Creature(newStrength, newHitpoints) {}

    std::string Human::getSpecies() const { return "Human"; }

    int Human::getDamage() const {
        int damage = Creature::getDamage();
        std::cout << "The " << getSpecies() << " attacks for " << damage << " points!" << std::endl;
        return damage;
    }
}
