// File : Chicken.h
// Berisi driver kelas Chicken

#ifndef Chicken_H
#define Chicken_H

# include "EggProducingFarmAnimal.h"
# include "MeatProducingFarmAnimal.h"

class Chicken : public EggProducingFarmAnimal, public MeatProducingFarmAnimal {
    public :
        ~Chicken(); // dtor
        void move_animal(); // method pergerakan Chicken
        void is_hungry(); // menghasilkan true jika Chicken dalam keadaan lapar
        void eat();
        void sounding(); // menuliskan "Petok.. Petok.." ke layar ketika player melakukan Talk
};

#endif