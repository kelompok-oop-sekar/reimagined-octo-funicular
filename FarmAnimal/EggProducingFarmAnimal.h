// File : EggProducingFarmAnimal.h
// Berisi driver kelas EggProducingFarmAnimal

#ifndef EGGPRODUCINGFARMANIMAL_H
#define EGGPRODUCINGFARMANIMAL_H

# include "FarmAnimal.h"
# include "../Product/Product.h"

class EggProducingFarmAnimal : public FarmAnimal{
    protected :
        bool egg;
    public :
        virtual Product grabEgg() = 0;
        void setEgg(bool state);
        bool getEgg();
};

#endif