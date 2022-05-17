#pragma once
#include <iostream>
#include "Registered_user.h"
#include "Feedbacks.h"
class Order;

using namespace std;

class Customer:public Registered_users
{
	private:
		string Customer_ID;
    Feedbacks *feed[2];
    Order *order[2];
	public:
		Customer(string get_username, string get_password,
			string get_pnum, string get_email,
			string get_address, string get_Customer_ID);
		void Give_feedback();
		void view_details();
		void Edit_customerinfo();
		void Addtocart();
		void buy_item();
		void buy_service();
    void addOrder(Order *o);
    void AddFeedback(Feedbacks *f1,Feedbacks *f2);
    
		~Customer();
};
