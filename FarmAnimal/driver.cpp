# include <iostream>
# include "Chicken.h"
using namespace std;

int main() {
    // test kelas Chicken
    Chicken c(1,1);
    c.sounding();
    // test kelas EggProducingFarmAnimal
    c.setEgg(true);
    if (c.getEgg()) {
        cout << "sudah bertelur" << endl;
    } else {
        cout << "belum bertelur" << endl;
    }
    // test kelas MeatProducingAnimal
    c.setMeat(false);
    if (c.getMeat()) {
        cout << "sudah dipotong" << endl;
    } else {
        cout << "belum dipotong" << endl;
    }
    bool killed = true;
    if (killed) {
        c.killed();
    }
    if (c.getMeat()) {
        cout << "sudah dipotong" << endl;
    } else {
        cout << "belum dipotong" << endl;
    }
    return 0;
}