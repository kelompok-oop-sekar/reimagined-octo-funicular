#ifndef _Truck_H_
#define _Truck_H_

#include "Facility.h"

// Kelas Mixer Merupakan turunan kelas Facility
// Berfungsi sebagai tempat player menukarkan barang untuk mendapat uang 
// Inisial "T"
class Truck : public Facility  {
	public :
		Truck(int x, int y); 
		/*Ctor dengan parameter. 
		 * x merepresentasikan posisi Truck dalam sumbu x (Horizontal), 
		 * y merepresentasikan posisi Truck dalam sumbu y (vertikal) */
		 
		char render(); // Hasil render adalah "T"
};

#endif
