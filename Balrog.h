#ifndef BALROG_H
#define BALROG_H

#include "Demon.h"

namespace cs_creature {
    class Balrog : public Demon {
    public:
        Balrog();
        Balrog(int newStrength, int newHitpoints);
        std::string getSpecies() const;
        int getDamage() const;
    };
}

#endif
