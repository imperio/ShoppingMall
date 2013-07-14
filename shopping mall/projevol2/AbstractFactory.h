#pragma once
#include "Shoe.h"
#include "Book.h"
#include "Game.h"

//storelarda kullan�calacak abstract factory patterinin
//base class�

class AbstractFactory{
public:
	//ald�g� tipe gore bir ayakkabi olusturur(boot,sneaker vb.)
	virtual Shoe* createShoe(string)=0;
	//ald�g� tipe gore bir kitap olusturur
	virtual Book* createBook(string)=0;
	//ald�g� tipe gore bir oyun olusturur
	virtual Game* createGame(string)=0;
};