#include <iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
void calculator();
void srednia();
void potenga();
float add(float a, float b);
float subtract(float a, float b);
float division(float a, float b);
float majority(float a, float b);

int main()
{
    calculator();
    //cout <<add(1, 2);
    return 0;
}
float add(float a, float b)
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
void calculator()
{
  char opcja=0;
  float n1;
  float n2;
    while(1>0)
    {
        cout<<"Wybierz operacje: "<<endl;
        cout<<"1. dodawanie"<<endl;
        cout<<"2. odejmowanie"<<endl;
        cout<<"3. mnozenie"<<endl;
        cout<<"4. dzilenie"<<endl;
        cout<<"5. srednia"<<endl;
        cout<<"6. potengowania"<<endl;
        cout<<"7. wyjscie z programu"<<endl;
        opcja=getch();
        switch(opcja)
        {
        case '1':
                cout<<"wpisz liczby ktore chcesz dodac: "<<endl;

                cin>> n1;
                cin>> n2;
                cout<<"wynik= "<<add(n1,n2);
                break;
          case '2':
                cout<<"wpisz liczby ktore chcesz odjac: "<<endl;

                cin>> n1;
                cin>> n2;
                cout<<"wynik= "<<subtract(n1,n2);
                break;
        case '3':
                cout<<"wpisz liczby ktore chcesz pomnpzyc: "<<endl;

                cin>> n1;
                cin>> n2;
                cout<<"wynik= "<<majority(n1,n2);
                break;
        case '4':
                cout<<"wpisz liczby ktore chcesz podzielic: "<<endl;

                cin>> n1;
                cin>> n2;
                cout<<"wynik= "<<division(n1,n2);
                break;
        case '5':
                srednia();
                break;
        case '6':
                potenga();
                break;
        case '7':
                exit(0);
                break;
        default:
                cout<<"niepoprawny wybor"<<endl;
        }
        getchar();
        getchar();
        system("cls");
    }

}
void srednia()
{
    int ilosc;
    cout<<"Ile liczb: "<<endl;
    cin>>ilosc;
    float liczby[ilosc];
    cout<< "Podaj liczby: "<<endl;

    for(int i=0; i<ilosc; i++)
    {
        cin>>liczby[ilosc];
    }
    float wynik=0;

    for(int i=0; i<ilosc; i++)
    {
        wynik += liczby[ilosc];
    }
    cout<<"srednia to "<<wynik/ilosc<<endl;
    cout<<endl<<endl;
}
void potenga()
{
float n1, n2;
float wynik=1;

    cout<<"Jaka liczba chcesz spotengowac: "<<endl;
    cin>>n1;
    cout<<"Do jakiej potengi: "<<endl;
    cin>>n2;
    if(n2==0)
        cout<<1<<endl;
    else
    {
        for(int i=0; i<n2; i++)
        {
            wynik=wynik*n1;
        }
        cout<<wynik<<endl;
    }
}
