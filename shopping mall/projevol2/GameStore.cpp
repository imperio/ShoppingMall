#include "GameStore.h"
#include <algorithm>

GameStore::GameStore(string n){name=n;}



Game* GameStore::orderGame(string type){
	    Game *game;
		game=createGame(type);
		return game;
	}

void GameStore::enter(Customer* ob){
	customers.push_back(ob);}

void GameStore::exit(Customer* ob){
	std::remove(customers.begin(),customers.end(),ob);
}

void GameStore::printCustomers(){
	vector<Customer*>::iterator iter;
	for(int i=0;iter!=customers.end();i++){
		cout<<i+1<<"# customer :"<<customers[i]->getName()<<endl;
	}
}

void GameStore::setName(string n){
	name=n;}

void GameStore::setId(int i){
	id=i;}

void GameStore::notifyObservers(){
	for(vector<Customer*>::iterator iter=customers.begin();
			customers.end()!=iter;iter++){
				Observer* cus=*iter;
				cus->update();}}

void GameStore::addItem(Game* Game){
	games.push_back(Game);
	}

Iterator<Game>* GameStore::createIterator(){
		return (Iterator<Game>*) (new GameStoreIterator(games));
	}

Game* createGame(string type){
	Game* game;
		if(type=="action"){
			game=new ActionGame();
			return game;}
		else if(type=="fighting"){
			game=new FightingGame();
			return game;}
		else if(type=="educational"){
			game=new EducationalGame();
			return game;}
		else return NULL;	
	}

void GameStore::printItems(){
	vector<Game*>::iterator iter;
	for(int i=0;iter!=games.end();i++){
		cout<<games[i]->getName()<<endl;}
}

string GameStore::getName(){
	return name;}

int GameStore::getId(){
	return id;}