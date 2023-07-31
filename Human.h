#ifndef HUMAN_H
#define HUMAN_H

#include "Creature.h"

namespace cs_creature {
    class Human : public Creature {
    public:
        Human();
        Human(int newStrength, int newHitpoints);
        std::string getSpecies() const;
        int getDamage() const;
    };
}

#endif
