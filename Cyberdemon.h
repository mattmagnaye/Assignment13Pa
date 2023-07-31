#ifndef CYBERDEMON_H
#define CYBERDEMON_H

#include "Demon.h"

namespace cs_creature {
    class Cyberdemon : public Demon {
    public:
        Cyberdemon();
        Cyberdemon(int newStrength, int newHitpoints);
        std::string getSpecies() const;
        int getDamage() const;
    };
}

#endif
