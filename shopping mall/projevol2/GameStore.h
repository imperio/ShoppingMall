#pragma once
#include "Game.h"
#include "ActionGame.h"
#include "FightingGame.h"
#include "EducationalGame.h"
#include "Store.h"
#include "GameStoreIterator.h"

using namespace std;

//Game storeda iterator ve factory patternleri kullan�ld�
//iterator i�in create iterator fonksiyonu
//factory i�in create ve order fonksiyonlar�
//ayr�ca observer patternin concrete subjectlerinden biri
//bu yuzden notifyObservers fonksiyonuna sahip

class GameStore:public Store{
public:
	GameStore(string);
	//virtual ~GameStore();
	Game* orderGame(string); //game factoryden oyun siparis eder
	void enter(Customer*); //oyun magazasina bir musteri girdi
	void exit(Customer*); //oyun magazasindan bir musteri cikti
	void printCustomers(); //oyun magazas�ndaki musterilerin isimlerini yazar
	void printItems(); //magazadaki oyunlar� g�r�nt�ler
	void setName(string); //magazaya isim vermek icin
	void setId(int); //bir id tan�mlamak icin
	void notifyObservers(); //yeni gelen oyun hakk�nda musterilere uyari yollar
    void addItem(Game* game); //yeni bir urun ekler
    Iterator<Game>* createIterator(); //bir iteraotor yarat�r
	string getName(); //magazan�n ad�n� dondurur
	int getId(); //magazan�n id sini dondurur
	

protected:
	Game* createGame(string type); //factory pattern geregi
	vector <Customer*> customers; 
	vector <Game*> games;

private:
	string name;
};
