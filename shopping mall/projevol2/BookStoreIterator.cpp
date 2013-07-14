#include "BookStoreIterator.h"

BookStoreIterator::BookStoreIterator(vector<Book*>i):items(i),position(0){}

Book* BookStoreIterator::next(){
		Book* book=items[position];
		position++;
		return book;
	}

bool BookStoreIterator::hasNext(){
		if(position>=(int)(items.size() ))
			return false;
		else
			return true;
	}