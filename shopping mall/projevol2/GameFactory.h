#pragma once
#include "AbstractFactory.h"
#include "Game.h"
#include "ActionGame.h"
#include "EducationalGame.h"
#include "FightingGame.h"

//Abstract factory patterinin concrete factorylerinden biri
//burada ayrýca singleton pattern de kullanýldý

class GameFactory:public AbstractFactory{
private:
	GameFactory(){}
	static GameFactory* uniqueInstance;//singleton patternde bir factoryden
										//sadece bir tane olmasi icin

public:
	static GameFactory* getInstance(){ //bu factorynin tek bir örnegini kullanabilmek icin gerekli
		if(uniqueInstance == NULL){
			uniqueInstance = new GameFactory();
		}
		return uniqueInstance;  
	}

	Game* createGame(string type){ // abstract factory patternin create fonksiyonu
	Game* game;
		if(type=="action"){
			game=new ActionGame();
			return game;}
		else if(type=="fighting"){
			game=new FightingGame();
			return game;}
		else if(type=="educational"){
			game=new EducationalGame();
			return game;}
		else return NULL;	
	}
	//asagidakiler abstract hatasi vermemesi icin oylesine yazildi
	Book* createBook(string t){Book* book; return book;}
	Shoe* createShoe(string t){Shoe* shoe; return shoe;}
};