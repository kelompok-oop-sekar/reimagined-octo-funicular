// File : Duck.h
// Berisi driver kelas Duck

#ifndef Duck_H
#define Duck_H

# include "EggProducingFarmAnimal.h"
# include "MeatProducingFarmAnimal.h"
# include "../Product/ChickenMeat.h"
# include "../Product/ChickenEgg.h"
# include "../Product/Product.h"

class Duck : public EggProducingFarmAnimal, public MeatProducingFarmAnimal {
    private :
        static string className;
        int tickHungry;
        int tickDie;
    public :
        /* ctor
            _x merepresentasikan koordinat sumbu x
            _y merepresentasikan koordinat sumbu y
            */
        Duck(int _x, int _y);
        string getClassName();
        void moveAnimal(); // method pergerakan Duck
        bool isHungry(); // true jika Duck dalam keadaan lapar
        void eat(LinkedList<Cell*> List);
        void sounding(); // menuliskan "Kwek.. Kwek.." ke layar ketika player melakukan Talk
        char render();
};

#endif