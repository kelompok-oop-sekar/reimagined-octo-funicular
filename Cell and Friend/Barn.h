#ifndef _BARN_H_
#define _BARN_H_

#include "Land.h"

//Barn Merupakan Turunan dari Land
class Barn : public Land {
	public :
		Barn(int _x, int _y, bool _grass);
		/*Ctor dengan parameter. 
		 * _x merepresentasikan posisi Barn dalam sumbu x (Horizontal), 
		 * _y merepresentasikan posisi Barn dalam sumbu y (vertikal) 
		 * _grass merepresentasikan apakah Barn merupakan Land berumput atau tidak*/
		char render(); // Hasil render adalah "x" jika tidak berumput, "@" jika berumput
		bool isWithGrass();// Menghasilkan true jika Barn berumput
		void removeGrass(); //Menghapus rumput. Mengembalikan "@" menjadi "x"
		void setBerumput(bool _berumput); //Set rumput pada Barn

		
};

#endif
