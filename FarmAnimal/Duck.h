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
        int tickHungry;
    public :
        ~Duck(); // dtor
        Product grabMeat();
        Product grabEgg();
        void moveAnimal(); // method pergerakan Duck
        bool isHungry(); // true jika Duck dalam keadaan lapar
        void eat();
        void sounding(); // menuliskan "Kwek.. Kwek.." ke layar ketika player melakukan Talk

};

#endif