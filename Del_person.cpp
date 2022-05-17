#include <iostream>
#include "Registered_user.h"
#include "Del_person.h"
#include "Jobs.h"
using namespace std;

Del_person::Del_person(string get_username, string get_password,
			string get_pnum, string get_email,
			string get_address, string get_D_ID):Registered_users(get_username,get_password,get_pnum,get_email,get_address){
        Del_Id=get_D_ID;
      }
void Del_person::viewDeliveryDetails(){
  cout << "name is : " << username << endl;
    cout << "Password is : " << password << endl;
    cout << "Phone number is : " << phone_number << endl;
    cout << "Email is" << email << endl;
    cout << "address iS " << address << endl;
    cout << "Delivery ID is " << Del_Id << endl;
    cout << "Jobs :" << endl;
    AddJobs();
    jobs[0]->viewJob(); 
    jobs[1]->viewJob();   
}  
void Del_person::ViewJobs(){
  
}
void Del_person::ViewDetailsOfOrder(){
  
}
void Del_person::location(){
  
}
void Del_person::CompleteJobs(){
  
}
void Del_person::AddJobs(){ 
  jobs[0]= new Jobs("J100","22/07/20200");
  jobs[1]= new Jobs("J101","02/01/2022");
}
