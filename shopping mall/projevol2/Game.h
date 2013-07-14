#pragma once
#include <iostream>
#include <string>
#include "Item.h"
using namespace std;

//Itemden tureyen bir class

class Game:public Item{
private:
	string mediaType;
	string gameType;
public:
	Game(); //default constructor
	Game(string,int,int,double,string,string);
	void printProperties(); //ozellikleri goruntuler
	//set fonksiyonlari
	void setName(string);
	void setId(int);
	void setStoreId(int);
	void setPrice(double);
	void setMediaType(string);
	void setGameType(string);
	//get fonksiyonlari
	string getName();
	int getId();
	int getStoreId();
	double getPrice();
	string getMediaType();
	string getGameType();
};









