#include "GameStoreIterator.h"

GameStoreIterator::GameStoreIterator(vector<Game*>i):items(i),position(0){}

Game* GameStoreIterator::next(){
		Game* Game=items[position];
		position++;
		return Game;
	}

bool GameStoreIterator::hasNext(){
		if(position>=(int)(items.size() ))
			return false;
		else
			return true;
	}