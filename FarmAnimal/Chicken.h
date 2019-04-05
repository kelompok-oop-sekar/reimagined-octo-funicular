// File : Chicken.h
// Berisi driver kelas Chicken

#ifndef Chicken_H
#define Chicken_H

# include "EggProducingFarmAnimal.h"
# include "MeatProducingFarmAnimal.h"
// # include "../Product/ChickenMeat.h"
// # include "../Product/ChickenEgg.h"
// # include "../Product/Product.h"

class Chicken : public EggProducingFarmAnimal, public MeatProducingFarmAnimal {
    private :
        int tickHungry;
        int tickDie;
    public :
        /* ctor
            _x merepresentasikan koordinat sumbu x
            _y merepresentasikan koordinat sumbu y
            */
        Chicken(int _x, int _y);
        void moveAnimal(); // method pergerakan Chicken
        bool isHungry(); // menghasilkan true jika Chicken dalam keadaan lapar
        void eat();
        void sounding(); // menuliskan "Petok.. Petok.." ke layar ketika player melakukan Talk
        /* Mekanisme ayam mati :
            1. Mati karena kelaparan : ketika isHungry return true dan tickDie = 0 (void die)
            2. Mati karena dipotong player (void killed)
            */
};

#endif