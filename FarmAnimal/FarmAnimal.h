// File : FarmAnimal.h
// Berisi driver kelas FarmAnimal

#ifndef FARMANIMAL_H
#define FARMANIMAL_H


class FarmAnimal {
    protected :
      int X; // posisi FarmAnimal pada sumbu X
      int Y; // posisi FarmAnimal pada sumbu Y
      int tick_to_die;
      int tick_to_hungry;

    public :
      // ctor
      FarmAnimal();
      virtual void move_animal();
      virtual void is_hungry();
      virtual void sounding() = 0;
      virtual void eat();
};

#endif