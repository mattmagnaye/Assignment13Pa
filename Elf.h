#ifndef ELF_H
#define ELF_H

#include "Creature.h"

namespace cs_creature {
    class Elf : public Creature {
    public:
        Elf();
        Elf(int newStrength, int newHitpoints);
        std::string getSpecies() const;
        int getDamage() const;
    };
}

#endif
