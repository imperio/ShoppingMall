#pragma once
#include "ItemToPurchase.h"
#include "Payment.h"
#include <vector>

//musterinin al�sveris kart�
//burada alacag� nesnelerin bir listesi tutulur

class ShoppingCart{
private:
	vector<ItemToPurchase*> itemsToPurchase;
	Payment* payment;
public:
	ShoppingCart();
	//virtual ~ShoppingCart();
	void addItem(ItemToPurchase*); //alacaklarina bir urun ekler
	void removeItem(ItemToPurchase*); //alacaklar�ndan bir urun kald�r�r
	void printItem(); //alacaklar�n� listeler
	void placeOrder();
	void cancelOrder(); //siparisi iptal eder
	void setPayment(Payment*); 
	Payment* getPayment();
};