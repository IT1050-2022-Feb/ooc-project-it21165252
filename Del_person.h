#pragma once
#include "Registered_user.h"
#include "Jobs.h"
#include <iostream>
#define size 2

using namespace std;

class Del_person:public Registered_users{
private:
  string Del_Id;
  Jobs *jobs[size];

public:
  Del_person(string get_username, string get_password,
			string get_pnum, string get_email,
			string get_address, string get_D_ID);
  void viewDeliveryDetails();
  void ViewJobs();
  void ViewDetailsOfOrder();
  void location();
  void CompleteJobs();
  void AddJobs();
};