// File : Buffalo.h
// Berisi driver kelas Buffalo

#ifndef Buffalo_H
#define Buffalo_H

# include "MilkProducingFarmAnimal.h"
# include "MeatProducingFarmAnimal.h"
# include "../Renderable.h"
using namespace std;

class Buffalo : public MilkProducingFarmAnimal, public MeatProducingFarmAnimal {
    private :
        static string className;
        int tickHungry;
        int tickDie;
    public :
        /* ctor
            _x merepresentasikan koordinat sumbu x
            _y merepresentasikan koordinat sumbu y
            */
        Buffalo(int _x, int _y);
        static string getClassName();
        string callGetClassName() {
            string a = getClassName();
            return a;
        }
        void moveAnimal(); // method pergerakan Buffalo
        bool isHungry();// menghasilkan true jika Buffalo dalam keadaan lapar
        void eat();
        void sounding(); // menuliskan "MOOOO.." ke layar ketika player melakukan Talk
        /* Mekanisme ayam mati :
            1. Mati karena kelaparan : ketika isHungry return true dan tickDie = 0 (void die)
            2. Mati karena dipotong player (void killed)
            */
        char render();
};

#endif