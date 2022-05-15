
#include "Registered_user.h"
#include <iostream>

using namespace std;

Registered_users::Registered_users() {

}

Registered_users::Registered_users(string get_username, string get_password, string get_pnum, string get_email, string get_address) {
	username = get_username;
	password = get_password;
	phone_number = get_pnum;
	email = get_email;
	address = get_address;
}
void Registered_users::set_username(string get_username) {
	username = get_username;
}
void Registered_users::set_password(string get_password) {
	password = get_password;
}
void Registered_users::set_phonenumber(string get_pnum) {
	phone_number = get_pnum;
}
void Registered_users::set_email(string get_email) {
	email = get_email;
}
void Registered_users::set_address(string get_address) {
	address = get_address;
}
void Registered_users::view_details(){

}
void Registered_users::view_feedback(){
  
}

Registered_users::~Registered_users() {
	cout << "objects are destroyed" << endl;
}