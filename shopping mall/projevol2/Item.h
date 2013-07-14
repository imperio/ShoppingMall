#pragma once
#include <iostream>
#include <string>
using namespace std;

//abstract Item classý

class Item{
protected:
	string name;
	int id;
	int storeId;
	double price;
public:
	//Item();
	//virtual ~Item();
	virtual void printProperties()=0;
	virtual void setName(string)=0;
	virtual void setId(int)=0;
	virtual void setStoreId(int)=0;
	virtual void setPrice(double)=0;
	virtual string getName()=0;
	virtual int getId()=0;
	virtual int getStoreId()=0;
	virtual double getPrice()=0;
};

