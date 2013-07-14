#pragma once
#include "Store.h"
#include "BookStore.h"
#include "Customer.h"
#include "GameStore.h"
#include "ShoeStore.h"
#include <iostream>
#include <string>
using namespace std;

//Alýsveris merkezimiz

class Mall{
private:
	string name;
	vector<Store*> stores;
	vector<Customer*> customers;
public:
	Mall();
	//virtual ~Mall();
	void enter(Customer*); //avm ye musteri girdi
	void exit(Customer*); //avm den musteri cikti
	void printCustomers(); //su an icerde olan musterileri goruntule
	void printStores(); //avmde mevcut store larý goruntule
	void addStore(string type,string name); //avm'ye yeni bir magaza acildi
	vector<Customer*> getCustomers(); 
	vector<Store*> getStores();

};

