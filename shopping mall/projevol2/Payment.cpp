#include "Payment.h"

Payment::Payment(double amount,string option){
		this->amount=amount;
		this->option=option;
		strategy=NULL;}

void Payment::pay(){
		if(this->option=="check")
			strategy=new Check();
		else if(this->option=="cash")
			strategy=new Cash();
		else if(this->option=="credit")
			strategy=new CreditCart();

		getAmount();
		strategy->performPayment();
	}

void Payment::setAmount(double amount){
	this->amount=amount;}

double Payment::getAmount(){
	return amount;}

