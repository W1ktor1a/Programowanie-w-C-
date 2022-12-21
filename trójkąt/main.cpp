#include <iostream>
#include <math.h>
#include<time.h>

using namespace std;

class trojkant
{
    public:
        float bok;
        float wysokosc;
        trojkant(float b)
        {
            bok=b;
            wysokosc=b*sqrt(3);
        }

        float pole()
        {
            return bok*wysokosc;
        }
        float obwod()
        {
            return 3*bok;
        }
};

int main()
{
   float b;
   cout<<"Podaj bok: ";
   cin>>b;
   trojkant t1(b);
   cout<<t1.bok<<endl;
   cout<<t1.wysokosc<<endl;
   cout<<t1.pole()<<endl;
   cout<<t1.obwod()<<endl;
   return 0;

}
