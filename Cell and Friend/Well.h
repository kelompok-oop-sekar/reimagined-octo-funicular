#ifndef _Well_H_
#define _Well_H_
// Kelas Well merepresentasikan sumur
#include "Facility.h"
class Well : public Facility  {
	public :
		Well(int x, int y);
		/*Ctor dengan parameter. 
		 * x merepresentasikan posisi Well dalam sumbu x (Horizontal), 
		 * y merepresentasikan posisi Well dalam sumbu y (vertikal) */
		
		char render(); //Hasil Render adalah "W"
};

#endif
