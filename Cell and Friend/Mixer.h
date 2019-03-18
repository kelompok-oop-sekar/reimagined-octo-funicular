#ifndef _Mixer_H_
#define _Mixer_H_

#include "Facility.h"
class Mixer : public Facility {
	public :
		Mixer(int x, int y); 
		/*Ctor dengan parameter. 
		 * x merepresentasikan posisi Mixer dalam sumbu x (Horizontal), 
		 * y merepresentasikan posisi Mixer dalam sumbu y (vertikal) */
		 		
		char render(); // Hasil Render adalah "M"
};

#endif
