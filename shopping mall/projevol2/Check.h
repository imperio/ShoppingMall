#pragma once
#include "Strategy.h"

//strategy patterin concrete strategylerinden biri

class Check:public Strategy{
public:
	void performPayment(); //odemenin �ek ile yapilmasini saglar
};

