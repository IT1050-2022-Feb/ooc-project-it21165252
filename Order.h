#pragma once
#include <string>
#include "Customer.h"
#include "Item.h"
#include "Service.h"
#include "payment.h"
using namespace  std;

class Order{
private:
  string orderId;
  string orderType;
  int noOfItems;
  int noOfServices;
  Customer *c1; 
  Item *i1[2];
  Service *ser[5];
  Payments *pay;
public:
  Order();
  Order(string id,string t,int NoItem,int NoService);
  void setOrderId(string id);
  void setOrderType(string t);
  void setNoOfItems(int NoItem);
  void setNoOfServices(int NoService);
  string getOrderId();
  string getOrderTyoe();
  int getNoOfItems();
  int getNoOfServices();
  void viewOrder();
  void CustomerOfOrder(Customer *c);
  void ItemsInOrder(Item *i01);
  void ServicesInOrder(Service *s);
  void PayPayment(Payments *p);
  ~Order();
};