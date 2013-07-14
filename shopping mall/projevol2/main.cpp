#include "ActionGame.h"
#include "Book.h"
#include "BookStore.h"
#include "BookStoreIterator.h"
#include "Boot.h"
#include "Cash.h"
#include "Check.h"
#include "CreditCart.h"
#include "Customer.h"
#include "EducationalGame.h"
#include "FightingGame.h"
#include "Game.h"
#include "GameStore.h"
#include "GameStoreIterator.h"
#include "HighHeeled.h"
#include "Item.h"
#include "ItemToPurchase.h"
#include "Magazine.h"
#include "Mall.h"
#include "Novel.h"
#include "Observer.h"
#include "Payment.h"
#include "Shoe.h"
#include "ShoeStore.h"
#include "ShoeStoreIterator.h"
#include "ShoppingCart.h"
#include "Sneaker.h"
#include "Store.h"
#include "Strategy.h"


int main(){
	Mall mall;

	mall.addStore("book","first book store");
	mall.addStore("game","first game store");
	mall.addStore("shoe","first shoe store");

   BookStore* secondbook=new BookStore("second book store");
   Book* book=secondbook->orderBook("novel");

   ShoeStore secondshoe("second shoe store");
   GameStore secondgame("second game store");

   mall.printStores();

   Customer* customer1=new Customer("Tugce");
   Customer* customer2=new Customer("Ahmet");
   Customer* customer3=new Customer("Asli");

   Book* book1=new Book();
   Shoe* shoe1=new Shoe();
   Game* game1=new Game();

   secondbook->addItem(book1);
   secondshoe.addItem(shoe1);
   secondgame.addItem(game1);

   secondbook->enter(customer1);
   secondbook->enter(customer2);
   secondbook->enter(customer3);

   secondbook->printCustomers();
   secondbook->exit(customer2);




    system("pause");
	return 0;
}