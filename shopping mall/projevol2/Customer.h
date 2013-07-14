#pragma once
#include <iostream>
#include "Observer.h"
#include "Iterator.h"
#include "Shoe.h"
#include "Book.h"
#include "Game.h"
#include <vector>
#include "ShoppingCart.h"

using namespace std;

//bunlarýn icinde de customer oldugu icin
//header olarak degil bu sekilde tanýmlamak zorundaydik
class ShoeStore;
class BookStore;
class GameStore;
class Store;

//customer classý concrete observer'a denk gelir
//cunku storelarda yapýlan degisiklikler musterilere bildirilir
//onlar da observer gorevi ustlenmis olurlar
//ayrýca iterator patterin clientý da bu classtýr.

class Customer:public Observer{
private:
	string name;
	ShoppingCart* shoppingCart;
	vector<Store*> stores;
	ShoeStore* ss;
	BookStore* bs;
	GameStore* gs;

	void printShoe(Iterator<Shoe>* iterator);
    void printBook(Iterator<Book>* iterator);
    void printGame(Iterator<Game>* iterator);

public:
	Customer(ShoeStore*,BookStore*,GameStore*);
	Customer(string n){name=n;}
	void printShoe(); 
    void printBook();
	void printGame();
	string getName();
	ShoppingCart* getShoppingCart();
	void setName(string);
	void update();
};

