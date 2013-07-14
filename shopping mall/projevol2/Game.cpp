#include "Game.h"

Game::Game(){
	setName("default name");
	setId(0);
	setStoreId(0);
	setPrice(0.0);
	setMediaType("media type");
	setGameType("game type");
}

Game::Game(string name,int id,int storeId,double price,string mtype,string gtype){
	setName(name);
	setId(id);
	setStoreId(storeId);
	setPrice(price);
	setMediaType(mtype);
	setGameType(gtype);
}

void Game::setName(string name){
	this->name=name;}

void Game::setGameType(string gameType){
	this->gameType=gameType;}

void Game::setId(int id){
	this->id=id;}

void Game::setMediaType(string mediaType){
	this->mediaType=mediaType;}

void Game::setPrice(double price){
	this->price=price;}

void Game::setStoreId(int storeId){
	this->storeId=storeId;}

string Game::getGameType(){
	return gameType;}

string Game::getName(){
	return name;}

int Game::getId(){
	return id;}

string Game::getMediaType(){
	return mediaType;}

double Game::getPrice(){
	return price;}

int Game::getStoreId(){
	return storeId;}

void Game::printProperties(){
	cout<<"Game's"<<endl
        <<"name: "<<getName()<<endl
		<<"id: "<<getId()<<endl
		<<"store id: "<<getStoreId()<<endl
		<<"price: "<<getPrice()<<endl
		<<"game type: "<<getGameType()<<endl
		<<"media type: "<<getMediaType()<<endl<<endl;
}

