#pragma once
#include<string>
using namespace std;

class Report{
private:
  string ReportID;
  string Type;
public:
  Report(string id,string t);
  void setReportId(string id);
  void setReportType(string t);
  string getReportId();
  string getReportType();
  void ViewFeddBackReports();
  void ListOfOrders();
  void ListOfServices();
  void SalesRepor();
  ~Report();
};