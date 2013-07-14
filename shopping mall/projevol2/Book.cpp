#include "Book.h"

Book::Book(){}

Book::Book(string name,int id,int storeid,double price,string author,string publisher){
	setName(name);
	setId(id);
	setStoreId(storeid);
	setPrice(price);
	setAuthor(author);
	setPublisher(publisher);
}

void Book::printProperties(){
	cout<<"Book's"<<endl
        <<"name: "<<getName()<<endl
		<<"id: "<<getId()<<endl
		<<"store id: "<<getStoreId()<<endl
		<<"price: "<<getPrice()<<endl
		<<"type: "<<getType()<<endl
		<<"author: "<<getAuthor()<<endl
		<<"publisher: "<<getPublisher()<<endl;
}

void Book::setName(string name){
	this->name=name;}

void Book::setAuthor(string author){
	this->author=author;}

void Book::setId(int id){
	this->id=id;}

void Book::setPublisher(string publisher){
	this->publisher=publisher;}

void Book::setPrice(double price){
	this->price=price;}

void Book::setStoreId(int storeId){
	this->storeId=storeId;}

void Book::setType(string type){
	this->type=type;}

string Book::getType(){
	return type;}

string Book::getName(){
	return name;}

int Book::getId(){
	return id;}

double Book::getPrice(){
	return price;}

int Book::getStoreId(){
	return storeId;}

string Book::getAuthor(){
	return author;}

string Book::getPublisher(){
	return publisher;}




