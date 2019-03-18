// File : Buffalo.h
// Berisi driver kelas Buffalo

#ifndef Buffalo_H
#define Buffalo_H

# include "EggProducingFarmAnimal.h"
# include "MeatProducingFarmAnimal.h"

class Buffalo : public EggProducingFarmAnimal, public MeatProducingFarmAnimal {
    private :
        bool milk;
        
    public :
        // dtor
        ~Buffalo();
        void animal_move();
        void is_hungry();
        void eat();
        void sounding();
};

#endif