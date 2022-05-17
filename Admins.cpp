#include<iostream>
#include "Registered_user.h"
#include "Admins.h"

using namespace std;

Admins::Admins(string get_username, string get_password,
			string get_pnum, string get_email,
			string get_address,string ID):Registered_users(get_username, get_password, get_pnum, get_email, get_address){
  Admin_ID=ID;
      }
void Admins::ViewAdmin(){
    cout << "name is : " << username << endl;
    cout << "Password is : " << password << endl;
    cout << "Phone number is : " << phone_number << endl;
    cout << "Email is" << email << endl;
    cout << "address iS " << address << endl;
    cout << "Admin ID is " << Admin_ID << endl;
}
void Admins::editAdmin(){
  
}
void Admins::GenerateReports(){
  
}
void Admins::ResponseToFeedbacks(){
  
}
Admins::~Admins(){
  
}