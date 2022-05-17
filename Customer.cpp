//Customer.cpp
#include "Customer.h"
#include "Registered_user.h"
#include "Feedbacks.h"
#include "Order.h"//com

Customer::Customer(string get_username, string get_password,
    string get_pnum, string get_email,
    string get_address, string get_Customer_ID) :Registered_users(get_username, get_password, get_pnum, get_email, get_address) {

    Customer_ID = get_Customer_ID;

}

void Customer::Give_feedback() {

}
void Customer::view_details(){
    cout << "name is : " << username << endl;
    cout << "Password is : " << password << endl;
    cout << "Phone number is : " << phone_number << endl;
    cout << "Email is" << email << endl;
    cout << "address iS " << address << endl;
    cout << "Customer ID is " << Customer_ID << endl;
}
void Customer::Edit_customerinfo(){

}
void Customer::Addtocart(){

}
void Customer::buy_item(){

}
void Customer::buy_service(){

}
void Customer::AddFeedback(Feedbacks *f1,Feedbacks *f2){
  feed[0]=f1;
  feed[1]=f2;
}
/*void Customer::addOrder(Order *o){
  
}*/
Customer::~Customer() {
	
}

