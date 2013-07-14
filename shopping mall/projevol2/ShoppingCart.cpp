#include "ShoppingCart.h"
#include <algorithm>

ShoppingCart::ShoppingCart(){}

void ShoppingCart::addItem(ItemToPurchase* item){
	itemsToPurchase.push_back(item);}

void ShoppingCart::removeItem(ItemToPurchase* item){
	std::remove(itemsToPurchase.begin(),itemsToPurchase.end(),item);}

void ShoppingCart::printItem(){
	vector<ItemToPurchase*>::iterator iter;
	for(int i=0;iter!=itemsToPurchase.end();i++){//en son bu printlerin hepsini duzelt
		cout<<itemsToPurchase[i]->getItem()->getName();}
}

void ShoppingCart::cancelOrder(){
	itemsToPurchase.clear();}

void ShoppingCart::setPayment(Payment* pay){
	payment=pay;}


