#include <iostream>
#include <math.h>
#include<time.h>
using namespace std;

class Circle
{
    public:
        int promien;

        Circle(int p)
        {
            promien=p;
        }
        float pole()
        {
            return M_PI*promien*promien;
        }
};

int main()
{
    srand(time(NULL));

       for(int i=0; i<10; i++)
       {
        int rand_promien=rand()%10;
        Circle kolo(rand_promien);

        cout<<<<"Kolo o promieniu "<<kolo.promien <<" ma pole: "<< kolo.pole()<<endl;

       }



    return 0;
}
