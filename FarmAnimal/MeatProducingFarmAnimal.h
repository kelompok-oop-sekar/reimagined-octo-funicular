// File : MeatProducingFarmAnimal.h
// Berisi driver kelas MeatProducingFarmAnimal

#ifndef MEATPRODUCINGFARMANIMAL_H
#define MEATPRODUCINGFARMANIMAL_H

# include "FarmAnimal.h"
# include "../Product/Product.h"

class MeatProducingFarmAnimal : virtual public FarmAnimal{
    protected :
        bool meat;
    public :
        /* ctor
            _x merepresentasikan koordinat sumbu x
            _y merepresentasikan koordinat sumbu y
            _meat merepresentasikan apakah hewan ternak sedang menghasikan daging atau tidak
            */
        MeatProducingFarmAnimal(int _x, int _y, bool _meat);
        void setMeat(bool _meat);
        bool getMeat();
        virtual Product grabMeat() = 0;
};

#endif