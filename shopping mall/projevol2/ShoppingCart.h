#pragma once
#include "ItemToPurchase.h"
#include "Payment.h"
#include <vector>

//musterinin alýsveris kartý
//burada alacagý nesnelerin bir listesi tutulur

class ShoppingCart{
private:
	vector<ItemToPurchase*> itemsToPurchase;
	Payment* payment;
public:
	ShoppingCart();
	//virtual ~ShoppingCart();
	void addItem(ItemToPurchase*); //alacaklarina bir urun ekler
	void removeItem(ItemToPurchase*); //alacaklarýndan bir urun kaldýrýr
	void printItem(); //alacaklarýný listeler
	void placeOrder();
	void cancelOrder(); //siparisi iptal eder
	void setPayment(Payment*); 
	Payment* getPayment();
};