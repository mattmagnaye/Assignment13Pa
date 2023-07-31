#include "Creature.h"
#include <cstdlib>

namespace cs_creature {
    Creature::Creature() : strength(10), hitpoints(10) {}
    Creature::Creature(int newStrength, int newHitpoints) : strength(newStrength), hitpoints(newHitpoints) {}

    int Creature::getStrength() const { return strength; }
    int Creature::getHitpoints() const { return hitpoints; }
    void Creature::setStrength(int newStrength) { strength = newStrength; }
    void Creature::setHitpoints(int newHitpoints) { hitpoints = newHitpoints; }

    std::string Creature::getSpecies() const { return "Creature"; }

    int Creature::getDamage() const {
        return (rand() % strength) + 1;
    }
}
