#include <iostream>
#include "Registered_user.h"
#include "Customer.h"
#include "Admins.h"  
#include "SystemOwner.h"  
#include "Del_person.h"
#include "Jobs.h"
#include "Feedbacks.h"
#include "Report.h"   
#include "Order.h"
#include "Item.h"
#include "Service.h"
using namespace std;

int main(){

  

    	//Registered user dynamic objects
	Registered_users *R_User1,*R_User2;
	R_User1= new Registered_users("Gihaan","XX5Xs","0771542525","giha@gmial.com","120/1st road/Colombo");
	R_User2= new Registered_users("Shan","sfshs","0112546687","shan@s.com","125/1st road/Colombo");
	cout << "-------------------------------------------------" << endl;

    //customer dynamic objects
  Customer *cus1,*cus2;
	cus1= new Customer("Dammya","12sd","0112545555","dammya@g.com","No.52/2nd lane/Kaluthara","CUS100");
	cus2= new Customer("Dimiya","12sdxs","0112545563","dammya@y.com","No.55/2nd lane/Kaluthara","CUS100");
	cus1->view_details();
	cus2->view_details();
	cout << "-------------------------------------------------" << endl;

   // Admins dynamic objects
  Admins *Ad1,*Ad2;
  Ad1= new Admins("Nimshan","qwert","1234565522","giha@1.com","No.120/lane 2/colombo","Admin1");
  Ad2= new Admins("Nimshani","qwertw","123478522","gimnan@1.com","No.120/lane 2/colombo 5","Admin2");
  Ad1->ViewAdmin();
  Ad2->ViewAdmin();
  cout << "-------------------------------------------------" << endl;

  SystemOwner *SO1,*SO2;
  SO1 = new SystemOwner("Ranil","qazxs","1234785","ranil.com","No.1/lane 2/colombo 5","SystemOwner1");
   SO2 = new SystemOwner("Mahinda","qplm","1234785","Maina@gmail.com","No.85/lane 2/colombo 5","SystemOwner2");
  SO1->ViewSystemOwner();
  SO2->ViewSystemOwner();
 cout << "-------------------------------------------------" << endl;

  //delivery person
  Del_person *del1,*del2;
  del1= new Del_person("John","qplm","","Maina@gmail.com","No.85/lane 2/colombo 5","Del100");
  del2= new Del_person("Mahinda","qplm","1234785","Maina@gmail.com","No.85/lane 2/colombo 5","Del101");

  del1-> viewDeliveryDetails();
  del2 -> viewDeliveryDetails();

  
  
  cout << "-------------------------------------------------" << endl;

  // Feddbacks
  Feedbacks *f1,*f2;
  f1= new Feedbacks("F100","02/05/2022");
  f2= new Feedbacks("F101","32/05/2021");
  Customer *cus3;
  cus3= new Customer("Dammya","12sd","0112545555","dammya@g.com","No.52/2nd lane/Kaluthara","CUS100");
  cus3->AddFeedback(f1,f2);

  //Reports
  Report *report1;
  Report *report2;
  report1= new Report("R100","Type A");
  report2= new Report("R101","Type C");

  SystemOwner *SO5;
  SO5=new SystemOwner("Mahinda","qplm","1234785","Maina@gmail.com","No.85/lane 2/colombo 5","SystemOwner2");

  SO5->GenerateReport(report1,report2);

    cout << "-------------------------------------------------" << endl;
  //item 
  Item *it1,*it2;
  it1= new Item("IT100","Item1",1200.00,"TypeA");
  it2= new Item("IT101","Item2",1200.00,"TypeB");

  Order *ord1;
  ord1= new Order("O100","TypeA",5,0);

  ord1->ItemsInOrder(it1);
  ord1->ItemsInOrder(it2);

  //Service
  Service *ser1;
  ser1= new Service("S105","SERVICE1",1000.00,"TYPEG");
  
   // Delete regsitered user
	delete R_User1;
	delete R_User2;

  // delete customers
	delete cus1;
	delete cus2;
  delete cus3;
  
  // delete admin 
  delete Ad1;
  delete Ad2;

 //Delete system admin
  delete SO1;
  delete SO2;
  delete SO5;
  //delete delivery person
  delete del1;
  delete del2;
  //Report
  delete report1;
  delete report2;
  // order
  delete ord1;
  // item 
  delete it1;
  delete it2;
  //Service
  delete ser1;
}