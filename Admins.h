#pragma once
#include "Registered_user.h"
#include <iostream>

using namespace std;

class Admins: public Registered_users{
protected:
  string Admin_ID;
public:
  Admins(string get_username, string get_password,
			string get_pnum, string get_email,
			string get_address,string ID);
  void ViewAdmin();
  void editAdmin();
  void GenerateReports();
  void ResponseToFeedbacks();
~Admins();
};