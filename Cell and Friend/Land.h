#ifndef _LAND_H_
#define _LAND_H_

#include "Cell.h"

//Land merupakan turunan dari Cell
class Land : public Cell {
	private :
		bool grass; //Merepresentasikan apakah Land berumput atau tidak
	public :
		Land(int _x, int _y, bool _grass); 
		/*Ctor dengan parameter. 
		 * _x merepresentasikan posisi Land dalam sumbu x (Horizontal), 
		 * _y merepresentasikan posisi Land dalam sumbu y (vertikal) 
		 * _grass merepresentasikan apakah Land memiliki rumput atau tidak*/
		
		virtual char render() = 0; //Pure Virtual dari render
		virtual bool isWithGrass() = 0; //Pure Virtual apakah turunan Land berumput atau tidak 
		virtual void setBerumput(bool _berumput) = 0; //Pure virtual untuk mengeset land berumput
		virtual void removeGrass() = 0; //Pure virtual untuk menghapus grass
};

#endif
