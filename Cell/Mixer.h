#ifndef _Mixer_H_
#define _Mixer_H_

#include "Product.h"
#include "Facility.h"
// Kelas Mixer merupakan turunan kelas Facility
// Salah satu fungsinya yaitu melakukan penggabungan product menjadi product baru 
// Inisial "M"
class Mixer : public Facility {
	public :
		Mixer(int x, int y); 
		/*Ctor dengan parameter. 
		 * x merepresentasikan posisi Mixer dalam sumbu x (Horizontal), 
		 * y merepresentasikan posisi Mixer dalam sumbu y (vertikal) */
		 		
		char render(); // Hasil Render adalah "M"
		Product mix(Product, Product); //Melakukan penggabungan Product
};

#endif
