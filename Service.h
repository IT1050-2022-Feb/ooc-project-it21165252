#pragma once
#include <string>
using namespace std;

class Service{
  private:
    string serviceId;
    string serviceName;
    float price;
    string type;
  public:
    Service(string service_id,string service_name,float service_p,string service_t);
    void setItemId(string service_id);
    void setItemName(string service_name);
    void setItemPrice(float service_p);
    void setItemType(string service_t);
    void removeService();
    void viewServiceInfo();
    ~Service(); 
};