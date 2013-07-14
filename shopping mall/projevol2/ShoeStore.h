#pragma once
#include "Shoe.h"
#include "Store.h"
#include "Boot.h"
#include "HighHeeled.h"
#include "Sneaker.h"
#include "Customer.h"
#include "ShoeStoreIterator.h"

using namespace std;

//Shoe storeda iterator ve factory patternleri kullanýldý
//iterator için create iterator fonksiyonu
//factory için create ve order fonksiyonlarý
//ayrýca observer patternin concrete subjectlerinden biri
//bu yuzden notifyObservers fonksiyonuna sahip

class ShoeStore:public Store{
public:
	ShoeStore(string);
	//virtual ~ShoeStore();
	Shoe* orderShoe(string type); //shoe factoryden ayakkabi siparis eder
	void enter(Customer*); //ayakkabi magazasýna bir musteri girdi
	void exit(Customer*); //ayakkabi magazasindan bir musteri cikti
	void printCustomers(); //magazaki musterileri goruntuler
	void printItems(); //magazadaki ayakkabileri goruntuler
	//set fonksiyonlarý
	void setName(string);
	void setId(int);
    void notifyObservers(); //yeni gelen ayakkabiyi musterilere bildirir
	void addItem(Shoe* shoe); //yeni bir ayakkabi ekler
	Iterator<Shoe>* createIterator(); //bir iterator yaratýr
	//get fonksiyonlari
	string getName();
	int getId();
    
protected:
	Shoe* createShoe(string type); //ayakkabi yaratýr (factory pattern icin)
	vector <Customer*> customers; 
	vector <Shoe*> shoes;
private:
	string name;
};







