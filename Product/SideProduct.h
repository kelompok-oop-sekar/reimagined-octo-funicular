//Nama file : SideProduct.h

#ifndef SIDEPRODUCT_H
#define SIDEPRODUCT_H

#include "Product.h"
#include <string>
//Side Product adalah base class dari produk produk yang bisa didapat pemain setelah melakukan mix antara 2 atau lebih farm product
class SideProduct : public Product {
private:
	static int n; //Jumlah dari side produk yang dimiliki pemain di inventori
public:
	static int getNSideProduct(); //Mengembalikan jumlah dari produk yang dimiliki pemain
};

#endif
