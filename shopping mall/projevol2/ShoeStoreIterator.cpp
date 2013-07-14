#include "ShoeStoreIterator.h"

ShoeStoreIterator::ShoeStoreIterator(vector<Shoe*>i):items(i),position(0){}

Shoe* ShoeStoreIterator::next(){
		Shoe* Shoe=items[position];
		position++;
		return Shoe;
	}

bool ShoeStoreIterator::hasNext(){
		if(position>=(int)(items.size() ))
			return false;
		else
			return true;
	}