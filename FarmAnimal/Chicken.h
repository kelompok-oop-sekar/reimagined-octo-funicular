// File : Chicken.h
// Berisi driver kelas Chicken

#ifndef Chicken_H
#define Chicken_H

# include "EggProducingFarmAnimal.h"
# include "MeatProducingFarmAnimal.h"

class Chicken : public EggProducingFarmAnimal, public MeatProducingFarmAnimal {
    private :
        bool egg;

    public :
        // dtor
        ~Chicken();
        void animal_move();
        void is_hungry();
        void eat();
        void sounding();
};

#endif