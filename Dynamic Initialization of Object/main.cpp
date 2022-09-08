#include<iostream>
using namespace std;

class Simple
{
    int principal;
    int years;
    float rate;
    float returnValue;
    
    public:
        Simple(){};
        Simple(int a, int y, float r);
        Simple(int a, int y, int r);
        void display(){
            cout << "The amout is "<< principal << " Time Period "<< years << " Years and rate is "<< rate <<"%" << endl;
            cout << "The value return is "<< returnValue;
        }
};
Simple :: Simple (int a, int y, float r)
{
    principal = a;
    rate = r;
    years = y;
    returnValue = principal;
    for (size_t i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+rate/100);
    }
}

int main()
{   
    Simple x, x2, x3;
    int p, y;
    float r;

    cout << "Enter the principal amount, year and rate "<<endl;
    
    cin>>p>>y>>r;

    x = Simple(p,y,r);
    x.display();

    return 0;
}