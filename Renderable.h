//Nama file : Renderable.h

#ifndef RENDERABLE_H
#define RENDERABLE_H

//Renderable merupakan ABC untuk kelas player, cell, dan farmanimal
class Renderable {
protected:
	static char Map[8][8]; // Map merupakan tempat menyimpan karakter hasil dari Renderable objek sesuai koordinatnya

public:
	static void display();
	static void setMap(int i, int j, char c);
	static char getMap(int i, int j);
	static bool isObjectExist(int i, int j);
	virtual char render() = 0; //method untuk mengembalikan karakter sesuai dari perilaku instantiasi renderable objects
};

#endif