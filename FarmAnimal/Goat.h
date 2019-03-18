// File : Goat.h
// Berisi driver kelas Goat

#ifndef Goat_H
#define Goat_H

# include "MeatProducingFarmAnimal.h"
# include "MilkProducingFarmAnimal.h"
# include "../Product/GoatMeat.h"
# include "../Product/GoatMilk.h"
# include "../Product/Product.h"

class Goat : public MeatProducingFarmAnimal, public MilkProducingFarmAnimal {
    public :
        ~Goat(); // dtor
        Product grabMeat();
        Product grabMilk();
        void move_animal(); // method pergerakan Goat
        void is_hungry(); // true jika Goat dalam keadaan lapar
        void eat();
        void sounding(); // menuliskan "Mbeek.. Mbeek.." ke layar ketika player melakukan Talk
};

#endif