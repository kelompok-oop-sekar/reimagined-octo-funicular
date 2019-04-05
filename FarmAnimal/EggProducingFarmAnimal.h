// File : EggProducingFarmAnimal.h
// Berisi driver kelas EggProducingFarmAnimal

#ifndef EGGPRODUCINGFARMANIMAL_H
#define EGGPRODUCINGFARMANIMAL_H

# include "FarmAnimal.h"
# include "../Product/Product.h"

class EggProducingFarmAnimal : public virtual FarmAnimal{
    protected :
        bool egg;
    public :
        /* ctor
            _x merepresentasikan koordinat sumbu x
            _y merepresentasikan koordinat sumbu y
            _egg merepresentasikan apakah hewan ternak sedang menghasikan telur atau tidak
            */
        EggProducingFarmAnimal(int _x, int _y, bool _egg);
        void grabEgg();
        void setEgg(bool _egg);
        bool getEgg();
};

#endif