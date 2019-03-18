//Nama file : Product.h

#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
//Product adalah base class dari produk produk yang bisa didapat pemain, farmproduct ataupun sideproduct
class Product {
private:
	static int n; //Jumlah dari keseluruhan produk yang dimiliki pemain di inventori
public:
	static int getNAllProduct(); //Mengembalikan jumlah dari produk yang dimiliki pemain
};

#endif
