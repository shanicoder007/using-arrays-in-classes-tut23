#include <iostream>
using namespace std;

class Shop
{

    int itemId[50];
    int itemPrice[50];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{

    cout << "Enter the Id of your item No : " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter the price of items: " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{

    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id " << itemId[i] << "  is  " << itemPrice[i] << endl;
    }
}

int main()
{

    Shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.displayPrice();

    return 0;
}