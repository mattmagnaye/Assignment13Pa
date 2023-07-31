#ifndef CREATURE_H
#define CREATURE_H

#include <string>

namespace cs_creature {
    class Creature {
    private:
        int strength;
        int hitpoints;
    public:
        Creature();
        Creature(int newStrength, int newHitpoints);
        int getStrength() const;
        int getHitpoints() const;
        void setStrength(int newStrength);
        void setHitpoints(int newHitpoints);
        std::string getSpecies() const;
        int getDamage() const;
    };
}

#endif
