#pragma once
#include <iostream>
#include "Item.h"
using namespace std;

//odenecek nesne

class ItemToPurchase{
private:
	Item* item;
	int quantity;
public:
	ItemToPurchase();
	//virtual ~ItemToPurchase();
	void setQuantity(int); //kac tane alýnacagýný ayarla
	void setItem(Item*); //urunu ayarla
	int getQuantity(); 
	Item* getItem();
};
