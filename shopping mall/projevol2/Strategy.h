#pragma once
#include <iostream>

using namespace std;

//Strategy patternin strategy'si

class Strategy{
public:
	virtual void performPayment()=0;
};

