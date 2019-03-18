// File : Cow.h
// Berisi driver kelas Cow

#ifndef Cow_H
#define Cow_H

# include "MeatProducingFarmAnimal.h"
# include "MilkProducingFarmAnimal.h"

class Cow : public MeatProducingFarmAnimal, public MilkProducingFarmAnimal {
    private :
        bool milk;

    public :
        // dtor 
        ~Cow();
        void move_animal();
        void is_hungry();
        void eat();
        void sounding();
};

#endif