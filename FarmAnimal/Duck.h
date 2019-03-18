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
    public :
        ~Duck(); // dtor
        Product grabMeat();
        Product grabEgg();
        void move_animal(); // method pergerakan Duck
        void is_hungry(); // true jika Duck dalam keadaan lapar
        void eat();
        void sounding(); // menuliskan "Kwek.. Kwek.." ke layar ketika player melakukan Talk

};

#endif