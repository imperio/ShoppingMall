#pragma once
#include <iostream>
#include <string>
#include "Item.h"
using namespace std;

//Item classýndan türeyen bir class

class Book:public Item{
private:
	string author;
	string publisher;
	string type;
public:
	Book(); //default constructor
	Book(string,int,int,double,string,string); //parametreli constructor
	void printProperties(); //özelliklerini goruntuler
	void setName(string); //ismi ayarlar
	void setType(string); //tipini ayarlar(novel story veya magazine)
	void setId(int); //id yi ayarlar
	void setStoreId(int); //store id yi ayarlar
	void setPrice(double); //fiyati ayarlar
	void setAuthor(string); //yazari ayarlar
	void setPublisher(string); //yayýncýyý ayarlar
	string getName(); //ismi dondurur
	string getType(); //tipi dondurur
	int getId(); //id yi dondurur
	int getStoreId(); //store id yi dondurur
	double getPrice(); //fiyatý dondurur
	string getAuthor(); //yazari dondurur
	string getPublisher(); //yayýncýyý dondurur
};