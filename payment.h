#pragma once
#include <string>
class Order;

using namespace std;

class Payments{
	private:
		string PaymentID;
		string Date;
		string PaymentType;
    Order *or5;
	public:
		Payments();
		Payments(string Id, string date, string type);
		void setId(string id);
		void setDate(string date);
		void setType(string type);
		string getpaymentId();
		string getDate();
		string getPaymentType();
		float CalcDiscount();
		void ViewPaymentDetails();
    void PaymentOrder(Order *o);
};