#pragma once
#include "Strategy.h"

//Strategy patternin concrete strategylerinden biri


class Cash:public Strategy{
public:
	void performPayment(); //odemenin nakit ile gerceklesmesini saglar
};

