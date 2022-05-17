#include "Report.h"
#include <string>
#include <iostream>

using namespace std;

Report::Report(string id,string t){
  ReportID=id;
  Type=t;
}
void Report::setReportId(string id){
  ReportID=id;
}
void Report::setReportType(string t){
  Type=t;
}
string Report::getReportId(){
  return ReportID;
}
string Report::getReportType(){
  return Type;
}
void Report::ViewFeddBackReports(){
  
}
void Report::ListOfOrders(){
  
}
void Report::ListOfServices()
{
  
}
void Report::SalesRepor()
{
  
}
Report::~Report(){
  cout << "Object is destroyed" << endl;
}

