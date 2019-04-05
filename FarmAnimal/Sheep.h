// File : Sheep.h
// Berisi driver kelas Sheep

#ifndef Sheep_H
#define Sheep_H

# include "MeatProducingFarmAnimal.h"
# include "MilkProducingFarmAnimal.h"
# include "../Product/SheepMilk.h"
# include "../Product/SheepMeat.h"
# include "../Product/Product.h"

class Sheep : public MeatProducingFarmAnimal, public MilkProducingFarmAnimal {
    private :
        int tickHungry;
        int tickDie;
    public :
        /* ctor
            _x merepresentasikan koordinat sumbu x
            _y merepresentasikan koordinat sumbu y
            */
        Sheep(int _x, int _y);
        void moveAnimal(); // method pergerakan Sheep
        bool isHungry(); // true jika Sheep dalam keadaan lapar
        void eat();
        void sounding(); // menuliskan "Mbiik.. Mbiik.." ke layar ketika player melakukan Talk
        /* Mekanisme ayam mati :
            1. Mati karena kelaparan : ketika isHungry return true dan tickDie = 0 (void die)
            2. Mati karena dipotong player (void killed)
            */
        char render();
};

#endif