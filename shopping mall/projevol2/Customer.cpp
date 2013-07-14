#include "Customer.h"
#include "BookStore.h"
#include "ShoeStore.h"
#include "GameStore.h"

Customer::Customer(ShoeStore* s,BookStore* b,GameStore* g){
		ss=s;
		bs=b;
		gs=g;
	}

void Customer::printShoe(){
	Iterator<Shoe>* shoeIterator=ss->createIterator();
		cout<<endl<<"--Shoe Store--"<<endl;
	printShoe(shoeIterator);
}

void Customer::printBook(){Iterator<Book>* bookIterator=bs->createIterator();
	cout<<endl<<"--Book Store--"<<endl;
    printBook(bookIterator);
}

void Customer::printGame(){Iterator<Game>* gameIterator=gs->createIterator();
	cout<<endl<<"--Game Store--"<<endl;
    printGame(gameIterator);
}

string Customer::getName(){
	return name;}

//ShoppingCart* Customer::getShoppingCart(){} //buraya bak

void Customer::setName(string n){
	name=n;}

void Customer::update(){cout<<"new item added to the store!"<<endl;}

//private icinde tanýmlanan fonksiyonlar

void Customer::printShoe(Iterator<Shoe>* iterator){
		while(iterator->hasNext() ){
			Shoe* shoe=(Shoe*)(iterator->next());
			shoe->printProperties();}
	}

void Customer::printBook(Iterator<Book>* iterator){
		while(iterator->hasNext() ){
			Book* book=(Book*)(iterator->next());
			book->printProperties();}
	}

void Customer::printGame(Iterator<Game>* iterator){
		while(iterator->hasNext() ){
		      Game* game=(Game*)(iterator->next());
			game->printProperties();}
	}

