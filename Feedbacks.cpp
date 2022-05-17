//Feedbacks.cpp

#include "Feedbacks.h"
#include<iostream>
#include<string>
using namespace std;

Feedbacks::Feedbacks(string id,string date){
    Feedback_ID = id;
    Date = date;
}

void Feedbacks::SetFeedbackID(string id){
    Feedback_ID = id;
}

void Feedbacks::SetDate(string date){
    Date = date;
}

string Feedbacks::GetFeedbackID(){
    return Feedback_ID;
}

string Feedbacks::GetFeedackDate(){
    return Date;
}

void Feedbacks::ViewFeedbackinfo(){
    cout << "Feedback ID : "<< Feedback_ID << endl;
    cout << "Date : " << Date << endl;
}

Feedbacks::~Feedbacks(){
    cout << "Destructor is called"<<endl;
    
}
