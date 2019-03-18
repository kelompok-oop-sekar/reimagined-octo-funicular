// File : MeatProducingFarmAnimal.h
// Berisi driver kelas MeatProducingFarmAnimal

#ifndef MEATPRODUCINGFARMANIMAL_H
#define MEATPRODUCINGFARMANIMAL_H

# include "FarmAnimal.h"
# include "../Product/Product.h"

class MeatProducingFarmAnimal : public FarmAnimal{
    public :
        virtual Product grabMeat() = 0;
};

#endif