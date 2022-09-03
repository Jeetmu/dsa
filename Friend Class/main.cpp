#include<iostream>
using namespace std;

//declaration
class Complex;

class calculator
{
    public:
        int add(int a, int b)
        {
            return(a + b);
        }
        int sumRealComplex(Complex, Complex);
        int sumCompComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    friend class calculator;

    public:
        void setData(int n1, int n2)
        {
            a = n1;
            b = n2;
        }
        void printData()
        {
            cout << "The number is "<< a << " + " << b << "i" << endl;
        }
};

int calculator :: sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int calculator :: sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    calculator sum;

    o1.setData(4,5);
    o1.printData();

    o2.setData(5, 6);
    o2.printData();

    int calc = sum.sumCompComplex(o1,o2);
    cout << "The sum of Comp number " << calc <<endl;

    int cal = sum.sumRealComplex(o1, o2);
    cout << "The sum of Real Number " << cal << endl;

    int add = sum.add(3,7);
    cout << "The addition is "<< add<<endl;

    return 0;
}