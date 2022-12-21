#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>



using namespace std;
class  Calculator
{
    public:
    float add(int a, int b)
        {
            return a+b;
        }
    float subtract(float a, float b)
        {
            return a-b;
        }
    float division(float a, float b)
        {
            return a/b;
        }
     float majority(float a, float b)
        {
            return a*b;
        }
};

int main()
{
    int opcja= 0;
    float a, b;
    Calculator calc;

    cout<<"wybierz operacje"<<endl;
    cout<<"1. dodawanie"<<endl;
    cout<<"2. odejmowanie"<<endl;
    cout<<"3. dzielenie"<<endl;
    cout<<"4. mnoznie"<<endl;
    cout<<"5. wyjscie z programu"<<endl;
    cin>>opcja;

    switch(opcja)
    {
        case 1:
            cin>>a;
            cin>>b;
            cout<<"wynik "<< calc.add(a,b);
            break;
        case 2:
            cin>>a;
            cin>>b;
            cout<<"wynik "<< calc.subtract(a,b);
            break;
        case 3:
             cin>> a;
             cin>> b;
             cout<<"wynik= "<<calc.division(a,b);
                break;
        case 4:
             cin>> a;
             cin>> b;
             cout<<"wynik= "<<calc.majority(a,b);
                break;
        case 5:
            exit(0);
            break;

        default:
            cout<<"niepoprawny wybor"<<endl;
    }

    return 0;

}
