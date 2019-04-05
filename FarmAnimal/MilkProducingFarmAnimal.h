// File : MilkProducingFarmAnimal.h
// Berisi driver kelas MilkProducingFarmAnimal

#ifndef MILKPRODUCINGFARMANIMAL_H
#define MILKPRODUCINGFARMANIMAL_H

# include "FarmAnimal.h"

class MilkProducingFarmAnimal : public virtual FarmAnimal{
    protected :
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
        void grabMilk();

};

#endif