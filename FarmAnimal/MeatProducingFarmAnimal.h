// File : MeatProducingFarmAnimal.h
// Berisi driver kelas MeatProducingFarmAnimal

#ifndef MEATPRODUCINGFARMANIMAL_H
#define MEATPRODUCINGFARMANIMAL_H

# include "FarmAnimal.h"

class MeatProducingFarmAnimal : public virtual FarmAnimal{
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
        void grabMeat();
};

#endif