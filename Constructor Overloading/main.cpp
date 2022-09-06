#include<iostream>
using namespace std;

class Simple
{
    int data1;
    double data2;
    double data3;

    public:
        Simple(int a, int b, int c)
        {
            data1 = a;
            data2 = b;
            data3 = c;
        }
        Simple(int a, int b)
        {
            data1 = a;
            data2 = b;
            data3 = data1 + data2;
        }
        Simple(int a)
        {
            data1 = a;
            data2 = data1*data1*data1;
            data3 = data2/8;
        }

        void printData()
        {
            cout << "The value of Data1, Data2, Data3 is "<<data1<<", "<<data2<< ", "<<data3 << endl;
        }
};

int main()
{
    Simple s(1,2,3);
    s.printData();

    Simple d(2,7);
    d.printData();

    Simple e(5);
    e.printData();
    return 0;
}