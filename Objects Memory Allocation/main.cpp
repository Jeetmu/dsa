#include<iostream>
using namespace std;

class Shop
{
    int ItemID[100];
    int ItemPrice[100];
    int counter;

    public:
        void initCounter(void) {
            counter = 0;
        }
        void setPrice(void);
        void displayPrice(void);
};

void Shop :: setPrice(void)
{
    cout << "Enter ID of the item no." << counter + 1 << endl;
    cin >> ItemID[counter];
    cout << "Enter the price of the item" << endl;
    cin >> ItemPrice[counter];
    counter++;
}

void Shop :: displayPrice(void) 
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Prive with the Item id " << ItemID[i] << " is " << ItemPrice[i] <<endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    int counter = 3;
    for (int i = 0; i < counter; i++)
    {
        dukaan.setPrice();
    }
    dukaan.displayPrice();
    return 0;
}