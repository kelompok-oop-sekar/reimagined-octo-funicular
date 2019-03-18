#ifndef _FACILITY_H_
#define _FACILITY_H_
#include "Cell.h"

// Kelas Facility berisikan fasilitas dari farm berupa Well, Mixer, dan Truck
// Merupakan parent dari kelas Well, Mixer, dan Truck
class Facility : public Cell {
	public :
		Facility(int x, int y); 
		/*Ctor dengan parameter. 
		 * x merepresentasikan posisi Facility dalam sumbu x (Horizontal), 
		 * y merepresentasikan posisi Facility dalam sumbu y (vertikal) */
};

#endif
