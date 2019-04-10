// File : FarmAnimal.h
// Berisi driver kelas FarmAnimal

#ifndef FARMANIMAL_H
#define FARMANIMAL_H

# include <string>
# include "../Renderable.h"
#include "../LinkedList.h"
#include "../Cell/Cell.h"

using namespace std;


// Kelas FarmAnimal merupakan turunan dari kelas Renderable
class FarmAnimal : public Renderable {
    protected :
      int x; // merepresentasikan koordinat sumbu x
      int y; // merepresentasikan koordinat sumbu y
      /* jumlah tick maksimum FarmAnimal kelaparan
         tickDie akan berkurang jumlahnya setiap hewan bergerak dan tidak menemukan rumput
         jika tickDie = 0, maka FarmAnimal mati kelaparan */
      // int tickDie; 

    public :
      // ctor
      FarmAnimal(int _x, int _y);
      int getX();
      int getY();
      // method pergerakan hewan ternak
      virtual void moveAnimal()=0; 
      // true jika hewan ternak dalam keadaan lapar
      virtual bool isHungry()=0;
      // prosedur untuk menampilkan suara hewan
      virtual void sounding()=0;
      // prosedur memakan rumput jika land yang dipijak berumput
      virtual void eat(LinkedList<Cell*> List);
	  virtual string getClassName() { return ""; }
};

#endif