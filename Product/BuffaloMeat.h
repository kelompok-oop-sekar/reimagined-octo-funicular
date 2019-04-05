// Nama File = BuffaloMeat.h

#ifndef BUFFALOMEAT_H
#define BUFFALOMEAT_H

#include "FarmProduct.h"
//BuffaloMeat adalah class dari objek daging kerbau yang bisa didapat player saat bermain
class BuffaloMeat : public FarmProduct{
private:
	static string className;
	static int n; // jumlah buffalomeat yang dimiliki player
	static int price; // harga buffalomeat
public:
	string callGetClassName() {
		string a = getClassName();
		return a;
	}
	static string getClassName();
	static int getNProduct(); //mengembalikan jumlah buffalomeat yang dimiliki player
	static int getPrice(); // mengembalikan harga buffalomeat jika terjual
};

#endif
