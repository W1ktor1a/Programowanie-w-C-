#include "Question.h"

Question::Question(string q, string a)
{
    question = q;
    answer=a;
}

Question::~Question()
{
    //dtor
}


bool Question::check_answer(string o)
{
    if( answer==o)
        return true;
    return false;
}

