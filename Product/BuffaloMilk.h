// NamaFile BUffaloMilk.h

#ifndef BUFFALOMILK_H
#define BUFFALOMILK_H

#include "Product.h"
// Kelas BuffaloMilk adalah kelas dari susu kerbau yang bisa didapat pemain saat program dijalankan
class BuffaloMilk : public Product{
private:
	static int n; //Mengembalikan jumlah dari BuffaloMilk yang dimiliki oleh pemain
	static int price; //Mengembalikan harga dari BuffaloMilk saat penjualan
public:
	static int getNProduct(); //mengembalikan jumlah buffalomeat yang dimiliki player
	static int getPrice(); // mengembalikan harga buffalomeat jika terjual
	~BuffaloMilk();
};

#endif
