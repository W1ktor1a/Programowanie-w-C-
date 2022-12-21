#include <iostream>
#include"Item.h"
#include"shop.h"

using namespace std;

int main()
{
    Item i1("phone","2000zl");
    Item i2("computere","3000zl");
    Item i3("TV","4000zl");
    Item i4("charger","100zl");
    shop s1;
    s1.run_shop;
    return 0;
}
