#pragma once
#include <string>
using namespace std;

class Item {
private:
  string itemId;
  string itemName;
  float price;
  string type;
public:
  Item(string item_id,string item_name,float item_p,string item_t);
  void setItemId(string item_id);
  void setItemName(string item_name);
  void setItemPrice(float item_p);
  void setItemType(string item_t);
  void removeItem();
  void viewItemInfo();
  ~Item();  
};