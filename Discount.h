//Discount.h
#pragma once
#include<iostream>
#include  "payment.h"
#include <string>
using namespace std;

class Discount{
    private:
        string DiscountID;
        string Date;

    public:
        Discount(string id,string date);
        void SetID(string id);
        void SetDate(string date);
        string GetID();
        string GetDate();
        void viewCompletedJobs();
        ~Discount();
        void appPyament(float price,Payments *p1);
};
