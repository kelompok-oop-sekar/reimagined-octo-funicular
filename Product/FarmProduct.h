//Nama file : FarmProduct.h

#ifndef FARMPRODUCT_H
#define FARMPRODUCT_H

#include <string>
//Farm Product adalah base class dari produk produk yang bisa didapat pemain langsung dari hewan ternak
class FarmProduct {
private:
	static int n; //Jumlah dari farm produk yang dimiliki pemain di inventori
public:
	static int getNFarmProduct(); //Mengembalikan jumlah dari produk yang dimiliki pemain
};

#endif
