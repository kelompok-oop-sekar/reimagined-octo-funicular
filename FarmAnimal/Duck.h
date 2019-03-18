// File : Duck.h
// Berisi driver kelas Duck

#ifndef Duck_H
#define Duck_H

# include "EggProducingFarmAnimal.h"
# include "MeatProducingFarmAnimal.h"

class Duck : public EggProducingFarmAnimal, public MeatProducingFarmAnimal {
    private :
        bool egg;

    public :
        // dtor
        ~Duck();
        void move_animal();
        void is_hungry();
        void eat();
        void sounding();
};

#endif