// File : Chicken.h
// Berisi driver kelas Chicken

#ifndef Chicken_H
#define Chicken_H

# include "EggProducingFarmAnimal.h"
# include "MeatProducingFarmAnimal.h"
# include "../Product/ChickenMeat.h"
# include "../Product/ChickenEgg.h"
# include "../Product/Product.h"

class Chicken : public EggProducingFarmAnimal, public MeatProducingFarmAnimal {
    private :
        int tickHungry;
    public :
        ~Chicken(); // dtor
        Product grabMeat();
        Product grabEgg();
        void moveAnimal(); // method pergerakan Chicken
        bool isHungry(); // menghasilkan true jika Chicken dalam keadaan lapar
        void eat();
        void sounding(); // menuliskan "Petok.. Petok.." ke layar ketika player melakukan Talk
};

#endif