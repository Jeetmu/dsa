#include<iostream>
using namespace std;

//swapping of numbers with class
class center2;

class center1
{
    int a;
    friend void exchange(center1 &, center2 &);
    public:
        void inData(int x)
        {
            a = x;
        }
        void display()
        {
            cout << a << endl;
        }
};
class center2
{
    int b;
    friend void exchange(center1 &, center2 &);
    public:
    void inData(int y)
    {
        b = y;
    }
    void display()
    {
        cout << b << endl;
    }
};
void exchange(center1 &p, center2 &q)
{
    int temp = p.a;
    p.a = q.b;
    q.b = temp;

}

int main()
{   
    center1 c1;
    center2 c2;

    c1.inData(5);
    c1.display();

    c2.inData(6);
    c2.display();

    exchange(c1,c2);
    cout << "After swapping" << endl;

    c1.display();
    c2.display();
    
    return 0;
}