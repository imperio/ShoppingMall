#include "BookStore.h"
#include <algorithm>

BookStore::BookStore(string n){name=n;}

Book* BookStore::orderBook(string type){
	    Book *book;
		book=createBook(type);
		return book;
	}

void BookStore::enter(Customer* ob){
	customers.push_back(ob);}

void BookStore::exit(Customer* ob){
	std::remove(customers.begin(),customers.end(),ob);
}

void BookStore::printCustomers(){
	vector<Customer*>::iterator iter;
	for(int i=0;iter!=customers.end();i++){
		cout<<i+1<<"# customer :"<<customers[i]->getName()<<endl;
	}
}

void BookStore::setName(string n){
	name=n;}

void BookStore::setId(int i){
	id=i;}

void BookStore::notifyObservers(){
	for(vector<Customer*>::iterator iter=customers.begin();
			customers.end()!=iter;iter++){
				Observer* cus=*iter;
				cus->update();}}

void BookStore::addItem(Book* book){
	books.push_back(book);
	}

Iterator<Book>* BookStore::createIterator(){
		return (Iterator<Book>*) (new BookStoreIterator(books));
	}

Book* createBook(string type){
	Book *book;
		if(type=="novel"){
			book=new Novel();
			return book;} 
		else if(type=="magazine"){
			book=new Magazine();
			return book;}
		else if(type=="story"){
			book=new Story();
			return book;}
		else return NULL;	
	}

void BookStore::printItems(){
	vector<Book*>::iterator iter;
	for(int i=0;iter!=books.end();i++){
		cout<<books[i]->getName()<<endl;}
}

string BookStore::getName(){
	return name;}

int BookStore::getId(){
	return id;}
