#include "Mall.h"
#include <algorithm>

Mall::Mall(){}

void Mall::enter(Customer* cus){
	customers.push_back(cus);}

void Mall::exit(Customer* cus){
	std::remove(customers.begin(),customers.end(),cus);}

void Mall::printCustomers(){
	vector<Customer*>::iterator iter;
	for(int i=0;iter!=customers.end();i++){
		cout<<customers[i]->getName()<<endl;}
}

void Mall::printStores(){
	vector<Store*>::iterator iter;
	for(int i=0;iter!=stores.end();i++){
		cout<<stores[i]->getName()<<endl; //tum storelara getName eklencek

}
}
void Mall::addStore(string type,string name){
	    Store* s;
		if(type=="book")
			s=new BookStore(name);
		else if(type=="shoe")
			s=new ShoeStore(name);
		else if(type=="game")
			s=new GameStore(name);
	}

vector<Customer*> Mall::getCustomers(){
		return customers;}


vector<Store*> Mall::getStores(){
		return stores;}