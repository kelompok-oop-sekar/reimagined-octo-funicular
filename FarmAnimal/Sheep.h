// File : Sheep.h
// Berisi driver kelas Sheep

#ifndef Sheep_H
#define Sheep_H

# include "MeatProducingFarmAnimal.h"
# include "MilkProducingFarmAnimal.h"

class Sheep : public MeatProducingFarmAnimal, public MilkProducingFarmAnimal {
    private :
        bool milk;

    public :
        // dtor
        // menghasilkan meat
        ~Sheep();
        void move_animal();
        void is_hungry();
        void eat();
        void sounding();
};

#endif