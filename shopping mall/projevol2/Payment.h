#pragma once
#include <iostream>
#include <string>
#include "Check.h"
#include "Cash.h"
#include "CreditCart.h"
#include "Strategy.h"

//burada strategy pattern kullanýldý
//bu class Context'e denk gelir

class Payment{
private:
	double amount;
	Strategy* strategy;
	string option;
public:
	Payment(double amount,string option); //odenecek miktar ve odeme secenegi belirtilerek
											//bir nesne olusturulmali
    void pay(); //odeme
    void setAmount(double); //odenecek miktarin ayarlanmasi
	double getAmount(); 
};