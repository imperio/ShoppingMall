#pragma once
#include <iostream>
using namespace std;

//bu class composite patterin component base class�d�r

class Component{
public:
	//virtual ~Component()=0;
	virtual void add()=0;
	virtual void remove()=0;
	virtual void printProperties()=0;
};