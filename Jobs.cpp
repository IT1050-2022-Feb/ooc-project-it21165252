#include <iostream>
#include <string>
#include "Jobs.h"

using namespace std;

Jobs::Jobs()
{
	JobsID = "No ID";
	date = "No date";
}

Jobs::Jobs(string Id, string D)
{
	JobsID = Id;
	date = D;
}

void Jobs::setDate(string D)
{
	
}

void Jobs::setID(string id)
{
	
}

string Jobs::getDate()
{
	
}

string Jobs::getID()
{
	
}

void Jobs::viewJob()
{
	cout <<"Job ID :" <<JobsID << endl;
  cout << "Job date :" << date << endl;
}