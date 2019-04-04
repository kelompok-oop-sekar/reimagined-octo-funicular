// File : Sheep.h
// Berisi driver kelas Sheep

#ifndef Sheep_H
#define Sheep_H

# include "MeatProducingFarmAnimal.h"
# include "MilkProducingFarmAnimal.h"
# include "../Product/SheepMilk.h"
# include "../Product/SheepMeat.h"
# include "../Product/Product.h"

class Sheep : public MeatProducingFarmAnimal, public MilkProducingFarmAnimal {
    private :
        int tickHungry;
    public :
        ~Sheep(); // dtor
        Product grabMeat();
        Product grabMilk();
        void moveAnimal(); // method pergerakan Sheep
        bool isHungry(); // true jika Sheep dalam keadaan lapar
        void eat();
        void sounding(); // menuliskan "Mbiik.. Mbiik.." ke layar ketika player melakukan Talk
};

#endif