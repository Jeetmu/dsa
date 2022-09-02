#include<iostream>
using namespace std;

class complex{
    int a;
    int b;

    public:
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }
        void setDataBySum(complex o1, complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
        void printNumber(){
            cout << "Your Complex Number is "<<a<<"+"<<b<<"i"<<endl;
        }
};

int main()
{
    complex z1, z2,z3;
    z1.setData(5,6);
    z1.printNumber();

    z2.setData(1,2);
    z2.printNumber();

    z3.setDataBySum(z1,z2);
    z3.printNumber();
    return 0;
}