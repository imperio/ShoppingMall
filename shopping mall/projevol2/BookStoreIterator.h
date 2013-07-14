#pragma once
#include <iostream>
#include "Iterator.h"
#include "Book.h"

using namespace std;

//bu class Iterator patternin concrete iteratorlerinden biri

class BookStoreIterator:public Iterator<Book>{
private:
	vector<Book*> items;
	int position;
public:

	BookStoreIterator(vector<Book*>i); //bookstore daki ürünler arasýndaki
	                                     //gezinmeyi saglayan iterator
	Book* next(); //bir sonraki kitap
    bool hasNext(); //su anki pozisyondan bir sonrakinde kitap var mý?
};
