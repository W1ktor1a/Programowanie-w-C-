#ifndef QUESTION_H
#define QUESTION_H
#include<iostream>

using namespace std;

class Question
{
    public:
        string question;
        Question(string q, string a);
        virtual ~Question();
        bool check_answer(string o);
    protected:

    private:
        string answer;

};

#endif // QUESTION_H
