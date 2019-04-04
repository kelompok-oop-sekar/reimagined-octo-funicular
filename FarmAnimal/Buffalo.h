// File : Buffalo.h
// Berisi driver kelas Buffalo

#ifndef Buffalo_H
#define Buffalo_H

# include "MilkProducingFarmAnimal.h"
# include "MeatProducingFarmAnimal.h"
# include "../Product/BuffaloMeat.h"
# include "../Product/BuffaloMilk.h"
# include "../Product/Product.h"

class Buffalo : public MilkProducingFarmAnimal, public MeatProducingFarmAnimal {
    private :
        int tickHungry;
    public :
        ~Buffalo(); // dtor Buffalo
        Product grabMeat();
        Product grabMilk();
        void moveAnimal(); // method pergerakan Buffalo
        bool isHungry();// menghasilkan true jika Buffalo dalam keadaan lapar
        void eat();
        void sounding(); // menuliskan "MOOOO.." ke layar ketika player melakukan Talk
};

#endif