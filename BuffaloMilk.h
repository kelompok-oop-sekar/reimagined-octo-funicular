// NamaFile BUffaloMilk.h

#ifndef BUFFALOMILK_H
#define BUFFALOMILK_H

#include "FarmProduct.h"
// Kelas BuffaloMilk adalah kelas dari susu kerbau yang bisa didapat pemain saat program dijalankan
class BuffaloMilk : public FarmProduct{
private:
	static string className;
	static int n; //Mengembalikan jumlah dari BuffaloMilk yang dimiliki oleh pemain
	static int price; //Mengembalikan harga dari BuffaloMilk saat penjualan
public:
	string getClassName();
	int getPrice(); // mengembalikan harga buffalomeat jika terjual
};

#endif
