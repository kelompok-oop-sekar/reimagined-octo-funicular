// File : Cow.h
// Berisi driver kelas Cow

#ifndef Cow_H
#define Cow_H

# include "MeatProducingFarmAnimal.h"
# include "MilkProducingFarmAnimal.h"
# include "../Product/CowMeat.h"
# include "../Product/CowMilk.h"
# include "../Product/Product.h"


class Cow : public MeatProducingFarmAnimal, public MilkProducingFarmAnimal {
    private :
        int tickHungry;
        int tickDie;
		static string className;
    public :
		string getClassName();
        /* ctor
            _x merepresentasikan koordinat sumbu x
            _y merepresentasikan koordinat sumbu y
            */
        Cow(int _x, int _y);
        void moveAnimal(); // method pergerakan Cow
        bool isHungry(); // menghasilkan true jika Cow dalam keadaan lapar
        void eat(LinkedList<Cell*> List);
        void sounding(); // menuliskan "Mooo.. Mooo.." ke layar ketika player melakukan Talk
        /* Mekanisme ayam mati :
            1. Mati karena kelaparan : ketika isHungry return true dan tickDie = 0 (void die)
            2. Mati karena dipotong player (void killed)
            */
        char render();
};

#endif