// File : Buffalo.h
// Berisi driver kelas Buffalo

#ifndef Buffalo_H
#define Buffalo_H

# include "MilkProducingFarmAnimal.h"
# include "MeatProducingFarmAnimal.h"

class Buffalo : public MilkProducingFarmAnimal, public MeatProducingFarmAnimal {
    public :
        ~Buffalo(); // dtor Buffalo
        void move_animal(); // method pergerakan Buffalo
        void is_hungry();// menghasilkan true jika Buffalo dalam keadaan lapar
        void eat();
        void sounding(); // menuliskan "MOOOO.." ke layar ketika player melakukan Talk
};

#endif