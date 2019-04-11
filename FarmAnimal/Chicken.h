// File : Chicken.h
// Berisi driver kelas Chicken

#ifndef Chicken_H
#define Chicken_H

# include "EggProducingFarmAnimal.h"
# include "MeatProducingFarmAnimal.h"

class Chicken : public EggProducingFarmAnimal, public MeatProducingFarmAnimal {
    private :
        static string className;
        int tickHungry;
        int tickDie;
    public :
        /* ctor
            _x merepresentasikan koordinat sumbu x
            _y merepresentasikan koordinat sumbu y
            */
        Chicken(int _x, int _y);
        string getClassName();
        void moveAnimal(); // method pergerakan Chicken
        bool isHungry(); // menghasilkan true jika Chicken dalam keadaan lapar
        void eat(LinkedList<Cell*> List);
        void sounding(); // menuliskan "Petok.. Petok.." ke layar ketika player melakukan Talk
        /* Mekanisme ayam mati :
            1. Mati karena kelaparan : ketika isHungry return true dan tickDie = 0 (void die)
            2. Mati karena dipotong player (void killed)
            */
        char render();
		bool isDie();
};

#endif