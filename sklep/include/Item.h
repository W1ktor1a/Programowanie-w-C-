#ifndef ITEM_H
#define ITEM_H
#include <iostream>

using namespace std;
class Item
{
    public:
        string item;
        string price;
        string name;
        Item(string name, string price);
        Item();
        virtual ~Item();

    protected:

    private:
};

#endif // ITEM_H
