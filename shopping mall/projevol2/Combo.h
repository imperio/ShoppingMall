#pragma once
#include "Item.h"
#include "Component.h"
#include <vector>
#include <iostream>
using namespace std;

//burada leafler �nceden item�n alt�nda
//tan�mlad�g�m�z book game shoe oluyor
//Combo isimli bu class Composite 'e denk gelir

class Combo:public Component{
private:
	string name;
	vector<Item*> items;
public:
	Combo();
	Combo(string n);
	//~Combo();
    void add(Item*); //comboya yeni urun ekler
	void remove(Item*); //combodan eleman c�kart�r
    void printProperties() ; //urunleri gosterir

};