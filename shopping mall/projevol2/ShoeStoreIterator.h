#pragma once
#include "Iterator.h"
#include "Shoe.h"

//Iterator patterinin concrete iteratorlerinden biri

class ShoeStoreIterator:public Iterator<Shoe>{
private:
	vector<Shoe*> items;
	int position;
public:
    ShoeStoreIterator(vector<Shoe*>i); //ShoeStore icin bir iterator yarat�l�r
	Shoe* next(); //iteratorun gosterdigi konumun bir sonras�
	bool hasNext(); //bir sonraki konumda nesne var m�? 
};