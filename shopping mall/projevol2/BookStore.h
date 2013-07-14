#pragma once
#include "Book.h"
#include "Novel.h"
#include "Story.h"
#include "Magazine.h"
#include "Store.h"
#include "Customer.h"
#include "BookStoreIterator.h"

using namespace std;

//Book storeda iterator ve factory patternleri kullanýldý
//iterator için create iterator fonksiyonu
//factory için create ve order fonksiyonlarý
//ayrýca observer patternin concrete subjectlerinden biri
//bu yuzden notifyObservers fonksiyonuna sahip

class BookStore:public Store{
public:
	BookStore(string);
	//virtual ~BookStore();
	Book* orderBook(string type); //book factoryden kitap siparis eder
	void enter(Customer*); // kitapciya bir musteri girdi
	void exit(Customer*); //kitapcidan bir musteri cikti
	void printCustomers(); //kitapcidaki musterileri goruntuler
	void printItems(); //storelerýn cpplerine eklemedim daha
	void setName(string); 
	void setId(int);
	void notifyObservers(); // yeni bir kitap geldiginde musterilere bildirir
	void addItem(Book* book); //yeni bir kitap ekler
	Iterator<Book>* createIterator(); //bir iterator olusturur
	string getName();
	int getId();
  
protected:
	 Book* createBook(string type); //factory patterinin create i
    vector <Customer*> customers; 
	vector <Book*> books;
private:
	string name;
};
