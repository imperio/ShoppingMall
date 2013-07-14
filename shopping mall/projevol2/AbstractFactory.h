#pragma once
#include "Shoe.h"
#include "Book.h"
#include "Game.h"

//storelarda kullanýcalacak abstract factory patterinin
//base classý

class AbstractFactory{
public:
	//aldýgý tipe gore bir ayakkabi olusturur(boot,sneaker vb.)
	virtual Shoe* createShoe(string)=0;
	//aldýgý tipe gore bir kitap olusturur
	virtual Book* createBook(string)=0;
	//aldýgý tipe gore bir oyun olusturur
	virtual Game* createGame(string)=0;
};