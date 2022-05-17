#include "Service.h"

Service::Service(string service_id,string service_name,float service_p,string service_t){
  serviceId = service_id;
  serviceName = service_name;
  price = service_p;
  type = service_t;
}
void Service::setItemId(string service_id){
  serviceId = service_id;
}
void Service::setItemName(string service_name){
  serviceName = service_name;
}
void Service::setItemPrice(float service_p){
  price = service_p;
}
void Service::setItemType(string service_t){
  type = service_t;
}
void Service::removeService(){
  
}
void Service::viewServiceInfo(){
  
}
Service::~Service(){
  
}