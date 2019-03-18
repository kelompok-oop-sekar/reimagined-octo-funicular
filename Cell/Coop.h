#ifndef _COOP_H_
#define _COOP_H_

#include "Land.h"

//Coop Merupakan Turunan dari Land
class Coop : public Land {
	public :
		Coop(int _x, int _y, bool _grass);
		/*Ctor dengan parameter. 
		 * _x merepresentasikan posisi Coop dalam sumbu x (Horizontal), 
		 * _y merepresentasikan posisi Coop dalam sumbu y (vertikal) 
		 * _grass merepresentasikan apakah Coop merupakan Land berumput atau tidak*/
		char render(); // Hasil render adalah "o" jika tidak berumput, "*" jika berumput
		bool isWithGrass(); //Menghasilkan true jika Coop berumput
		void removeGrass(); //Menghapus rumput. Mengembalikan "*" menjadi "o"
		void setBerumput(bool _berumput); //Set rumput pada Coop
};

#endif
