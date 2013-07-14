#include "Shoe.h"

Shoe::Shoe(){
	setName("default name");
	setId(0);
	setStoreId(0);
	setPrice(0.0);
	setNumber(0);
	setGender("gender");
}

Shoe::Shoe(string name,int id,int storeId,double price,int number,string gender){
	setName(name);
	setId(id);
	setStoreId(storeId);
	setPrice(price);
	setNumber(number);
	setGender(gender);
}

void Shoe::setName(string name){
	this->name=name;}

void Shoe::setGender(string gender){
	this->gender=gender;}

void Shoe::setId(int id){
	this->id=id;}

void Shoe::setNumber(int number){
	this->number=number;}

void Shoe::setPrice(double price){
	this->price=price;}

void Shoe::setStoreId(int storeId){
	this->storeId=storeId;}

void Shoe::setType(string type){
	this->type=type;}

string Shoe::getGender(){
	return gender;}

string Shoe::getName(){
	return name;}

int Shoe::getId(){
	return id;}

int Shoe::getNumber(){
	return number;}

double Shoe::getPrice(){
	return price;}

int Shoe::getStoreId(){
	return storeId;}

void Shoe::printProperties(){
	cout<<"Shoe's"<<endl
        <<"name: "<<getName()<<endl
		<<"id: "<<getId()<<endl
		<<"store id: "<<getStoreId()<<endl
		<<"price: "<<getPrice()<<endl
		<<"number: "<<getNumber()<<endl
		<<"gender: "<<getGender()<<endl<<endl;
}

