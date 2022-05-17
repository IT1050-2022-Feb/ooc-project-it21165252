//Feedbacks.h
#pragma once
#include<iostream>
#include<string>
using namespace std;

class Feedbacks{
    private:
        string Feedback_ID;
        string Date;
        
    public:
        Feedbacks(string id,string date);
        void SetFeedbackID(string id);
        void SetDate(string date);
        string GetFeedbackID();
        string GetFeedackDate();
        void ViewFeedbackinfo();
        ~Feedbacks();
        
};
