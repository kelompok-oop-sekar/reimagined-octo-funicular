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
      virtual void move_animal(); // method pergerakan hewan ternak
      virtual void is_hungry(); // true jika hewan ternak dalam keadaan lapar
      virtual void sounding() = 0; // pure virtual yang akan berisi method untuk menampilkan suara hewan
      virtual void eat();
};

#endif