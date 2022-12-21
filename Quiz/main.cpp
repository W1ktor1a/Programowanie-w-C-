#include <iostream>
#include"Question.h"

using namespace std;
string o;

int main()
{
    int result=0;
    Question q1("Jaki kolor ma niebo?","niebieski");
    Question q2("Co pada w zimie?","snieg");
    Question q3("Sroka jest ptakiem czy ssakiem?","ptakiem");


     Question questions_array[3] ={q1, q2, q3,};

    for(int i=0; i<3; i++)
    {
        string o;
        cout << questions_array[i].question << endl;
        cin >> o;
        bool r = questions_array[i].check_answer(o);
        if(r)
        {
            cout << "Twoja odpowiedz jest poprawna" << endl;
            result += 1;
        }
        else
            cout << "Twoje odpowiedz jest niepoprwna" << endl;
    }

    cout << "your score is " << result;
    return 0;
}

