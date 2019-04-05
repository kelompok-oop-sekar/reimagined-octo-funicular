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
        /* ctor
            _x merepresentasikan koordinat sumbu x
            _y merepresentasikan koordinat sumbu y
            _meat merepresentasikan apakah hewan ternak sedang menghasikan daging atau tidak
            */
        MilkProducingFarmAnimal(int _x, int _y, bool _milk);
        void setMilk(bool _milk);
        bool getMilk();
        virtual Product grabMilk() = 0;

};

#endif