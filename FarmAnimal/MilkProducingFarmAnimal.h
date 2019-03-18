// File : MilkProducingFarmAnimal.h
// Berisi driver kelas MilkProducingFarmAnimal

#ifndef MILKPRODUCINGFARMANIMAL_H
#define MILKPRODUCINGFARMANIMAL_H

# include "FarmAnimal.h"
# include "../Product/Product.h"

class MilkProducingFarmAnimal : public FarmAnimal{
    private :
        bool milk;
    public :
        virtual Product grabMilk() = 0;
        void setMilk(bool state);
        bool getMilk();

};

#endif