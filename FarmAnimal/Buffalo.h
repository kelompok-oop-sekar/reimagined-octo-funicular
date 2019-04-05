// File : Buffalo.h
// Berisi driver kelas Buffalo

#ifndef Buffalo_H
#define Buffalo_H

# include "MilkProducingFarmAnimal.h"
# include "MeatProducingFarmAnimal.h"
# include "../Product/BuffaloMeat.h"
# include "../Product/BuffaloMilk.h"
# include "../Product/Product.h"

class Buffalo : public MilkProducingFarmAnimal, public MeatProducingFarmAnimal {
    private :
        int tickHungry;
        int tickDie;
    public :
        /* ctor
            _x merepresentasikan koordinat sumbu x
            _y merepresentasikan koordinat sumbu y
            */
        Buffalo(int _x, int _y);
        // Product grabMeat();
        // Product grabMilk();
        void moveAnimal(); // method pergerakan Buffalo
        bool isHungry();// menghasilkan true jika Buffalo dalam keadaan lapar
        void eat();
        void sounding(); // menuliskan "MOOOO.." ke layar ketika player melakukan Talk
        /* Mekanisme ayam mati :
            1. Mati karena kelaparan : ketika isHungry return true dan tickDie = 0 (void die)
            2. Mati karena dipotong player (void killed)
            */
        void die();
        void killed();
};

#endif