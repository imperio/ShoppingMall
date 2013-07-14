#include "ShoeStore.h"
#include <algorithm>


ShoeStore::ShoeStore(string n){name=n;}



Shoe* ShoeStore::orderShoe(string type){
	    Shoe *shoe;
		shoe=createShoe(type);
		return shoe;
	}

void ShoeStore::enter(Customer* ob){
	customers.push_back(ob);}

void ShoeStore::exit(Customer* ob){
	std::remove(customers.begin(),customers.end(),ob);
}

void ShoeStore::printCustomers(){
	vector<Customer*>::iterator iter;
	for(int i=0;iter!=customers.end();i++){
		cout<<i+1<<"# customer :"<<customers[i]->getName()<<endl;
	}
}

void ShoeStore::setName(string n){
	name=n;}

void ShoeStore::setId(int i){
	id=i;}

void ShoeStore::notifyObservers(){
	for(vector<Customer*>::iterator iter=customers.begin();
			customers.end()!=iter;iter++){
				Observer* cus=*iter;
				cus->update();}}

void ShoeStore::addItem(Shoe* Shoe){
	shoes.push_back(Shoe);
	}

Iterator<Shoe>* ShoeStore::createIterator(){
		return (Iterator<Shoe>*) (new ShoeStoreIterator(shoes));
	}

Shoe* createShoe(string type){
	Shoe *shoe;
		if(type=="highheeled"){
			shoe=new HighHeeled();
		return shoe;}
		else if(type=="boot"){
			shoe=new Boot();
			return shoe;}
		else if(type=="sneaker"){
			shoe=new Sneaker();
			return shoe;}
		else return NULL;	
	}

void ShoeStore::printItems(){
	vector<Shoe*>::iterator iter;
	for(int i=0;iter!=shoes.end();i++){
		cout<<shoes[i]->getName()<<endl;}
}

string ShoeStore::getName(){
	return name;}

int ShoeStore::getId(){
	return id;}