#include "Combo.h"
#include <algorithm>

Combo::Combo(){
        name="untitled combo";
}

Combo::Combo(string n){
	name=n;}

void Combo::add(Item *item){
	items.push_back(item);
}

void Combo::remove(Item* item){
	std::remove(items.begin(),items.end(),item);
}

void Combo::printProperties(){
	vector<Item*>::iterator iter;
	for(int i=0;iter!=items.end();i++){
		cout<<items[i]->getName()<<endl
			<<items[i]->getStoreId()<<endl
			<<items[i]->getPrice()<<endl;
	}
}

