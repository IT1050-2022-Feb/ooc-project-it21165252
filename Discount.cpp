//Discount.cpp

#include "Discount.h" 
#include <iostream>
#include <string>
using namespace std;

Discount::Discount(string id ,string date){
    DiscountID = id;
    Date = date;
}

void Discount::SetID(string id){
    DiscountID = id;
}

void Discount::SetDate(string date){
    Date = date;
}

string Discount::GetID(){
    return DiscountID;
}

string Discount::GetDate(){
    return Date;
}

void Discount::viewCompletedJobs(){
    cout<<"Discount ID :"<<DiscountID<<endl;
    cout<<"Date : "<<Date<<endl;
}

Discount::~Discount(){
    cout<<"Distructor is called"<<endl;
}
void Discount::appPyament(float price,Payments *p1){
  // dependecy
}