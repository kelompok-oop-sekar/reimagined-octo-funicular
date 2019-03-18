// File : Duck.h
// Berisi driver kelas Duck

#ifndef Duck_H
#define Duck_H

# include "EggProducingFarmAnimal.h"
# include "MeatProducingFarmAnimal.h"

class Duck : public EggProducingFarmAnimal, public MeatProducingFarmAnimal {
    public :
        ~Duck(); // dtor
        void move_animal(); // method pergerakan Duck
        void is_hungry(); // true jika Duck dalam keadaan lapar
        void eat();
        void sounding(); // menuliskan "Kwek.. Kwek.." ke layar ketika player melakukan Talk

};

#endif