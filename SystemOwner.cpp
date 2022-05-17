#include <iostream> 
#include "Registered_user.h"
#include "Admins.h"
#include "SystemOwner.h"

using namespace std;

SystemOwner::SystemOwner(string get_username, string get_password,
			string get_pnum, string get_email,
			string get_address,string ID):Admins(get_username, get_password, get_pnum, get_email, get_address,ID){
 
      }
void SystemOwner::ViewSystemOwner(){ 
    cout << "name is : " << username << endl;
    cout << "Password is : " << password << endl;
    cout << "Phone number is : " << phone_number << endl;
    cout << "Email is :" << email << endl;
    cout << "address iS : " << address << endl;
    cout << "System Owner ID is : " << Admin_ID << endl;
}
void SystemOwner::EditSystemOwnerDetails(){
  
}
void SystemOwner::ManageItems(){
  
}
void SystemOwner::GenerateReport(Report *r1,Report *r2){
  Rep[0]=r1;
  Rep[1]=r2;
}

SystemOwner::~SystemOwner(){
  
}
