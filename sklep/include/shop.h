#ifndef SHOP_H
#define SHOP_H
#include<iostream>
#include"Item.h"

using namespace std;
class shop
{
    public:
        shop();
        string items[4];
        void run_shop();
        void add_item();
        void sell_item();

        virtual ~shop();

    protected:

    private:
};

#endif // SHOP_H
