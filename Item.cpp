#include "Item.h"

Item::Item(string item_id,string item_name,float item_p,string item_t){
  itemId = item_id;
  itemName = item_name;
  price = item_p;
  type = item_t;
}
void Item::setItemId(string item_id){
  itemId = item_id;
}
void Item::setItemName(string item_name){
  itemName = item_name;
}
void Item::setItemPrice(float item_p){
  price = item_p;
}
void Item::setItemType(string item_t){
 type = item_t; 
}
void Item::removeItem(){
  
}
void Item::viewItemInfo(){
  
}
Item::~Item(){
  
}