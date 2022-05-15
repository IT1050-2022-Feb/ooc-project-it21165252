#pragma once
//Registered User Class
#include <string>

using namespace std;

class Registered_users
{
	protected:
		string username;
		string password;
		string phone_number;
		string email;
		string address;

	public:
		Registered_users();
		Registered_users(string get_username, string get_password, string get_pnum, string get_email, string get_address);
		void set_username(string get_username);
		void set_password(string get_password);
		void set_phonenumber(string get_pnum);
		void set_email(string get_email);
		void set_address(string get_address);
		virtual void view_details();
    void view_feedback();
		~Registered_users();
			
};
