// File : Cow.h
// Berisi driver kelas Cow

#ifndef Cow_H
#define Cow_H

# include "MeatProducingFarmAnimal.h"
# include "MilkProducingFarmAnimal.h"
# include "../Product/CowMeat.h"
# include "../Product/CowMilk.h"
# include "../Product/Product.h"


class Cow : public MeatProducingFarmAnimal, public MilkProducingFarmAnimal {
    public :
        ~Cow(); // dtor
        Product grabMeat();
        Product grabMilk();
        void move_animal(); // method pergerakan Cow
        void is_hungry(); // menghasilkan true jika Cow dalam keadaan lapar
        void eat();
        void sounding(); // menuliskan "Mooo.. Mooo.." ke layar ketika player melakukan Talk
};

#endif