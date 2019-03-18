// Nama File = BuffaloMeat.h

#ifndef BUFFALOMEAT_H
#define BUFFALOMEAT_H

#include "Product.h"
//BuffaloMeat adalah class dari objek daging kerbau yang bisa didapat player saat bermain
class BuffaloMeat : public Product{
private:
	static int n; // jumlah buffalomeat yang dimiliki player
	static int price; // harga buffalomeat
public:
	static int getNProduct(); //mengembalikan jumlah buffalomeat yang dimiliki player
	static int getPrice(); // mengembalikan harga buffalomeat jika terjual
	~BuffaloMeat();
};

#endif
