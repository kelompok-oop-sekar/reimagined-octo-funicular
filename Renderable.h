//Nama file : Renderable.h

#ifndef RENDERABLE_H
#define RENDERABLE_H
//Renderable merupakan ABC untuk kelas player, cell, dan farmanimal
class Renderable {
protected:
	static char** Map; // Map merupakan tempat menyimpan karakter hasil dari Renderable objek sesuai koordinatnya

public:
	virtual char render() = 0; //method untuk mengembalikan karakter sesuai dari perilaku instantiasi renderable objects
};

#endif
