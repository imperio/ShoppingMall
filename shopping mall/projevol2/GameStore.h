#pragma once
#include "Game.h"
#include "ActionGame.h"
#include "FightingGame.h"
#include "EducationalGame.h"
#include "Store.h"
#include "GameStoreIterator.h"

using namespace std;

//Game storeda iterator ve factory patternleri kullanýldý
//iterator için create iterator fonksiyonu
//factory için create ve order fonksiyonlarý
//ayrýca observer patternin concrete subjectlerinden biri
//bu yuzden notifyObservers fonksiyonuna sahip

class GameStore:public Store{
public:
	GameStore(string);
	//virtual ~GameStore();
	Game* orderGame(string); //game factoryden oyun siparis eder
	void enter(Customer*); //oyun magazasina bir musteri girdi
	void exit(Customer*); //oyun magazasindan bir musteri cikti
	void printCustomers(); //oyun magazasýndaki musterilerin isimlerini yazar
	void printItems(); //magazadaki oyunlarý görüntüler
	void setName(string); //magazaya isim vermek icin
	void setId(int); //bir id tanýmlamak icin
	void notifyObservers(); //yeni gelen oyun hakkýnda musterilere uyari yollar
    void addItem(Game* game); //yeni bir urun ekler
    Iterator<Game>* createIterator(); //bir iteraotor yaratýr
	string getName(); //magazanýn adýný dondurur
	int getId(); //magazanýn id sini dondurur
	

protected:
	Game* createGame(string type); //factory pattern geregi
	vector <Customer*> customers; 
	vector <Game*> games;

private:
	string name;
};
