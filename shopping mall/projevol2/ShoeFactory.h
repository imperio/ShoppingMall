#pragma once
#include "Shoe.h"
#include "HighHeeled.h"
#include "Boot.h"
#include "Sneaker.h"
#include "AbstractFactory.h"

//Abstract factory patterinin concrete factorylerinden biri
//burada ayrýca singleton pattern de kullanýldý

class ShoeFactory:public AbstractFactory{
private:
	ShoeFactory(){}
	static ShoeFactory* uniqueInstance;//singleton patternde bir factoryden
										//sadece bir tane olmasi icin

public:
	static ShoeFactory* getInstance(){ //bu factorynin tek bir örnegini kullanabilmek icin gerekli
		if(uniqueInstance == NULL){
			uniqueInstance = new ShoeFactory();
		}
		return uniqueInstance;  
	}

	Shoe* createShoe(string type){ // abstract factory patternin create fonksiyonu
	Shoe *shoe;
		if(type=="highheeled"){
			shoe=new HighHeeled();
		return shoe;}
		else if(type=="boot"){
			shoe=new Boot();
			return shoe;}
		else if(type=="sneaker"){
			shoe=new Sneaker();
			return shoe;}
		else return NULL;	
	}
	//asagidakiler abstract hatasi vermemesi icin oylesine yazildi
	Game* createGame(string t){Game* game; return game;}
	Book* createBook(string t){Book* book; return book;}
};
