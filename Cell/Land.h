#ifndef _LAND_H_
#define _LAND_H_

#include "Cell.h"

// Land merupakan turunan dari Cell
// Parent bagi Coop, Grassland, dan Barn
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
		bool isWithGrass(); //Apakah Land (beserta turunannya) memiliki rumput atau tidak 
		void setGrass(); //set land (beserta turunannya) agar memiliki rumput
		void removeGrass(); //Untuk menghapus grass
};

#endif
