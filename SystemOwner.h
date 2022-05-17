#pragma once
#include "Registered_user.h"
#include "Admins.h"
#include <iostream>
#include"Report.h"

class SystemOwner : public Admins{
private:
    string Admin_ID;
    Report *Rep[2];
public:
  SystemOwner(string get_username, string get_password,
			string get_pnum, string get_email,
			string get_address,string ID);
  void ViewSystemOwner();
  void EditSystemOwnerDetails();
  void ManageItems();
  void GenerateReport(Report *r1,Report *r2);
  ~SystemOwner();
};