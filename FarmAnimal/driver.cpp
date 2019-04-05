# include <iostream>
# include "Buffalo.h"
using namespace std ;

int main() {
    Buffalo a(1,1);
    int b,c;
    b = a.getX(); c = a.getY();
    cout << b << " " << c <<endl;
    // test move animal
    a.moveAnimal();
    b = a.getX(); c = a.getY();
    cout << b << " " << c <<endl;
    // test isHUngry
    if (a.isHungry()) {
        cout << "HUNGRY" << endl;
    } else {
        cout << "NOT HUNGRY" << endl;
    }
    char rend = a.render();
    cout << rend << endl;
    for (int i=0; i<10; i++) {
        a.moveAnimal();
    }
    if (a.isHungry()) {
        cout << "HUNGRY" << endl;
    } else {
        cout << "NOT HUNGRY" << endl;
    }
    // test sounding
    a.sounding();
    rend = a.render();
    cout << rend << endl;
    return 0;
}