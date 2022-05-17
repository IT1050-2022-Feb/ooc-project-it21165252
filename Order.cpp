#include <iostream>
#include "Order.h"
#include <string>
#include "Customer.h"
#include "Order.h"
#include "Item.h"
#include "Service.h"
using namespace std;

Order::Order(){
  
}
Order::Order(string id,string t,int NoItem,int NoService){
  orderId=id;
  orderType=t;
  noOfItems=NoItem;
  noOfServices=NoService;
}
int Order::getNoOfItems(){
  return noOfItems;
}
int Order::getNoOfServices(){
  return noOfServices;
}
 void Order:: setOrderId(string id){
   orderId=id;
 }
void Order:: setOrderType(string t){
  orderType=t;
}
void Order:: setNoOfItems(int NoItem){
     noOfItems=NoItem;
  }
void Order::setNoOfServices(int NoService){
  noOfServices=NoService;
}
void Order::viewOrder(){
  
}
void Order::CustomerOfOrder(Customer *c){
  
}
void Order::ItemsInOrder(Item *i5){
  
}
void Order::ServicesInOrder(Service *s){
  
}
void Order::PayPayment(Payments *p){
  
}
Order::~Order(){
  cout << "Objects are destroyed";
}
    
  



















