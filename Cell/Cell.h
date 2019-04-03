#ifndef _CELL_H_
#define _CELL_H_
#include "../Renderable.h"
//Class cell merupakan parent dari kelas Facility dan kelas Land
//Class cell meupakan turunan dari Renderable
class Cell : public Renderable{
	private:
		int x; //Merepresentasikan koordinat x pada sumbu x (Horizontal)
		int y; //Merepresentasikan koordinat y pada sumbu y (Vertikal)
	public :
		Cell(int x, int y);
		/*Ctor dengan parameter. 
		 * x merepresentasikan posisi Cell dalam sumbu x (Horizontal), 
		 * y merepresentasikan posisi Cell dalam sumbu y (vertikal) */
		
		int getX() const;
		// Mendapatkan posisi x dari cell
		int getY() const;
		// Mendapatkan posisi y dari cell
		
		void setX(int x);
		// Mengeset posisi x dari cell
		void setY(int y);
		// Mengeset posisi y dari cell
};

#endif
