// File : Goat.h
// Berisi driver kelas Goat

#ifndef Goat_H
#define Goat_H

# include "MeatProducingFarmAnimal.h"
# include "MilkProducingFarmAnimal.h"

class Goat : public MeatProducingFarmAnimal, public MilkProducingFarmAnimal {
    private :
        bool milk;

    public :
        // dtor
        ~Goat();
        void move_animal();
        void is_hungry();
        void eat();
        void sounding();
};

#endif