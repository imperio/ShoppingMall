#pragma once
#include <iostream>
#include <vector>
using namespace std;

//iterator patternin iterator classý

template<class T>
class Iterator{
public:
	virtual bool hasNext()=0;
	virtual T* next()=0;
};





