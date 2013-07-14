#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Item.h"
#include "Customer.h"

using namespace std;

//store observer patterinin subject'ine denk geliyor.

class Store{
protected:
	int id;
	string name;
public:
	virtual void enter(Customer*)=0;
	virtual void exit(Customer*)=0;
	virtual void printCustomers()=0;
	virtual void printItems()=0;
	virtual void setName(string)=0;
	virtual void setId(int)=0;
	virtual void notifyObservers()=0;
	virtual string getName()=0;
	virtual int getId()=0;
	
};
