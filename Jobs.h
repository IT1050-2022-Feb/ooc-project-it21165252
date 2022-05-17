
#pragma once
#include <string>

using namespace std;

class Jobs{
	private:
		string JobsID;
		string date;
	public:
		Jobs();
		Jobs(string Id, string D);
		void setID(string id);
		void setDate(string D);
		string getID();
		string getDate();
		void viewJob();	
};