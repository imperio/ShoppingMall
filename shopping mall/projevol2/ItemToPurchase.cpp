#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase(){}

void ItemToPurchase::setQuantity(int q){
	//kac tane oldugu
	quantity=q;}

void ItemToPurchase::setItem(Item* item){
	this->item=item;}

int ItemToPurchase::getQuantity(){
	return quantity;}

Item* ItemToPurchase::getItem(){
	return item;}
