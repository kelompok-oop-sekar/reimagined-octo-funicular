// File : Sheep.h
// Berisi driver kelas Sheep

#ifndef Sheep_H
#define Sheep_H

# include "MeatProducingFarmAnimal.h"
# include "MilkProducingFarmAnimal.h"

class Sheep : public MeatProducingFarmAnimal, public MilkProducingFarmAnimal {
    private :
        bool milk; // true jika Sheep telah menghasilkan milk dan belum diambil oleh player

    public :
        ~Sheep(); // dtor
        void move_animal(); // method pergerakan Sheep
        void is_hungry(); // true jika Sheep dalam keadaan lapar
        void eat();
        void sounding(); // menuliskan "Mbiik.. Mbiik.." ke layar ketika player melakukan Talk
};

#endif