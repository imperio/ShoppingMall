#pragma once
#include <iostream>
#include <string>
#include "Item.h"
using namespace std;

//Itemdan tureyen Shoe classı

class Shoe:public Item{
private:
	int number;
	string gender;
	string type;
public:
	Shoe(); //default constructor
	Shoe(string,int,int,double,int,string); //parametreli constructor
	void printProperties(); //shoenun ozellikleri goruntuler
	//set fonksiyonları
	void setName(string); 
	void setType(string);
	void setId(int);
	void setStoreId(int);
	void setPrice(double);
	void setNumber(int);
	void setGender(string);
	//get fonksiyonları
	string getName();
	string getType();
	int getId();
	int getStoreId();
	double getPrice();
	int getNumber();
	string getGender();
};