// File : Goat.h
// Berisi driver kelas Goat

#ifndef Goat_H
#define Goat_H

# include "MeatProducingFarmAnimal.h"
# include "MilkProducingFarmAnimal.h"
# include "../Product/GoatMeat.h"
# include "../Product/GoatMilk.h"
# include "../Product/Product.h"

class Goat : public MeatProducingFarmAnimal, public MilkProducingFarmAnimal {
    private :
        int tickHungry;
        int tickDie;
    public :
        /* ctor
            _x merepresentasikan koordinat sumbu x
            _y merepresentasikan koordinat sumbu y
            */
        Goat(int _x, int _y);
        void moveAnimal(); // method pergerakan Goat
        bool isHungry(); // true jika Goat dalam keadaan lapar
        void eat();
        void sounding(); // menuliskan "Mbeek.. Mbeek.." ke layar ketika player melakukan Talk
        /* Mekanisme ayam mati :
            1. Mati karena kelaparan : ketika isHungry return true dan tickDie = 0 (void die)
            2. Mati karena dipotong player (void killed)
            */
};

#endif