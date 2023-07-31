#ifndef DEMON_H
#define DEMON_H

#include "Creature.h"

namespace cs_creature {
    class Demon : public Creature {
    public:
        Demon();
        Demon(int newStrength, int newHitpoints);
        std::string getSpecies() const;
        int getDamage() const;

    protected:
        static const double DEMONIC_ATTACK_PROBABILITY;
        static const int DEMONIC_BONUS_DAMAGE;
    };
}

#endif
