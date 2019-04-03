#ifndef _GRASSLAND_H_
#define _GRASSLAND_H_

#include "Land.h"

//Grassland Merupakan Turunan dari Land
class Grassland : public Land {
	public :
		Grassland(int _x, int _y, bool _grass); 
		/*Ctor dengan parameter. 
		 * _x merepresentasikan posisi Grassland dalam sumbu x (Horizontal), 
		 * _y merepresentasikan posisi Grassland dalam sumbu y (vertikal) 
		 * _grass merepresentasikan apakah Grassland merupakan Land berumput atau tidak */
		char render();// Hasil render adalah "-" jika tidak berumput, "#" jika berumput
		//bool isWithGrass();// Menghasilkan true jika Grassland berumput
		//void removeGrass();// Menghapus rumput. Mengembalikan "#" menjadi "-"
		//void setGrass(); //Set rumput pada Grassland
};

#endif
