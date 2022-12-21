#include <iostream>
#include <math.h>
#include<time.h>
using namespace std;

class Rectangle
{
public:
    int a;
    int b;

    Rectangle(int aa, int bb)
         {
            a = aa;
            b = bb;
        }

    int pole()
        {
            return a*b;
        }

    int obwod()
        {
            return 2*a + 2*b;
        }
};
int main()
{
     int a;
     int b;
     cin>>a;
     cin>>b;
     Rectangle p1(a,b);
    cout << "pole: "<<p1.pole()<<endl <<"obwod: "<<  p1.obwod() << endl;



    return 0;
}
