#pragma once
#include "Shoe.h"
#include "Store.h"
#include "Boot.h"
#include "HighHeeled.h"
#include "Sneaker.h"
#include "Customer.h"
#include "ShoeStoreIterator.h"

using namespace std;

//Shoe storeda iterator ve factory patternleri kullan�ld�
//iterator i�in create iterator fonksiyonu
//factory i�in create ve order fonksiyonlar�
//ayr�ca observer patternin concrete subjectlerinden biri
//bu yuzden notifyObservers fonksiyonuna sahip

class ShoeStore:public Store{
public:
	ShoeStore(string);
	//virtual ~ShoeStore();
	Shoe* orderShoe(string type); //shoe factoryden ayakkabi siparis eder
	void enter(Customer*); //ayakkabi magazas�na bir musteri girdi
	void exit(Customer*); //ayakkabi magazasindan bir musteri cikti
	void printCustomers(); //magazaki musterileri goruntuler
	void printItems(); //magazadaki ayakkabileri goruntuler
	//set fonksiyonlar�
	void setName(string);
	void setId(int);
    void notifyObservers(); //yeni gelen ayakkabiyi musterilere bildirir
	void addItem(Shoe* shoe); //yeni bir ayakkabi ekler
	Iterator<Shoe>* createIterator(); //bir iterator yarat�r
	//get fonksiyonlari
	string getName();
	int getId();
    
protected:
	Shoe* createShoe(string type); //ayakkabi yarat�r (factory pattern icin)
	vector <Customer*> customers; 
	vector <Shoe*> shoes;
private:
	string name;
};







