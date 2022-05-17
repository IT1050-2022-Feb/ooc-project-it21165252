#include <iostream>
#include <string>
#include "payment.h"

using namespace std;

Payments::Payments()
{
	PaymentID = "NO ID";
	Date = "No date";
	PaymentType = "No PaymentType";
}

Payments::Payments(string Id, string date, string type)
{
	PaymentID = Id;
	Date = date;
	PaymentType = type;
}
void Payments::PaymentOrder(Order *o){
  
}
void Payments::setDate(string date)
{
	
}

void Payments::setId(string id)
{
	
}

void Payments::setType(string type)
{
	
}

string Payments::getDate()
{
	
}

string Payments::getpaymentId()
{
	
}

string Payments::getPaymentType()
{
	
}

float Payments::CalcDiscount()
{
	
}

void Payments::ViewPaymentDetails()
{
	
}
