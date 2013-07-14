#pragma once
#include "Iterator.h"
#include "Game.h"

//bu class Iterator patternin concrete itarotorlerinden biridir

class GameStoreIterator:public Iterator<Game>{
private:
	vector<Game*> items;
	int position;
public:
    GameStoreIterator(vector<Game*>i); //storeda gezinmeyi saglayan iterator
	Game* next(); //bir sonraki oyun
    bool hasNext(); //bir sonraki pozisyonda oyun var mý?
};
