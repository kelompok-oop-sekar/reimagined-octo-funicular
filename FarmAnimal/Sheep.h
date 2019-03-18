// File : Sheep.h
// Berisi driver kelas Sheep

#ifndef Sheep_H
#define Sheep_H

# include "MeatProducingFarmAnimal.h"
# include "MilkProducingFarmAnimal.h"

class Sheep : public MeatProducingFarmAnimal, public MilkProducingFarmAnimal {
    public :
        ~Sheep(); // dtor
        void move_animal(); // method pergerakan Sheep
        void is_hungry(); // true jika Sheep dalam keadaan lapar
        void eat();
        void sounding(); // menuliskan "Mbiik.. Mbiik.." ke layar ketika player melakukan Talk
};

#endif