#pragma once
#include "Strategy.h"

//strategy patternin concrete strategylerinden biri

class CreditCart:public Strategy{
public:
	void performPayment(); //odemenin kredi kartiyla yapilmasini saglar
};

