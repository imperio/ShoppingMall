#pragma once
#include "AbstractFactory.h"
#include "Book.h"
#include "Novel.h"
#include "Story.h"
#include "Magazine.h"

//Abstract factory patterinin concrete factorylerinden biri
//burada ayrýca singleton pattern de kullanýldý

class BookFactory:public AbstractFactory{
private:
	BookFactory(){}
	static BookFactory* uniqueInstance; //singleton patternde bir factoryden
										//sadece bir tane olmasi icin

public:
	static BookFactory* getInstance(){ //bu factorynin tek bir örnegini kullanabilmek icin gerekli
		if(uniqueInstance == NULL){
			uniqueInstance = new BookFactory();
		}
		return uniqueInstance;  
	}

    Book* createBook(string type){ // abstract factory patternin create fonksiyonu
	Book *book;
		if(type=="novel"){
			book=new Novel();
			return book;} 
		else if(type=="magazine"){
			book=new Magazine();
			return book;}
		else if(type=="story"){
			book=new Story();
			return book;}
		else return NULL;	
	}
	//asagidakiler abstract hatasi vermemesi icin oylesine yazildi
	Shoe* createShoe(string t){Shoe* shoe; return shoe;}
	Game* createGame(string t){Game* game; return game;}

};