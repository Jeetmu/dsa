#include<iostream>
#include<cmath>
using namespace std;
 
class Point{
    int a,b; 
    friend void distance(Point, Point);
    public:
        Point(int, int);

        void displayPoint()
        {
            cout << "The point is (" << a << "," << b << ")"<<endl;
        }
};

void distance(Point p1, Point p2)
{
    int diff_x = p1.a-p2.a; 
    int diff_y = p1.b-p2.b; 
    double diff = sqrt(diff_x) - sqrt(diff_y);
    cout << diff_x << " - "<<diff_y << endl;
    cout << diff <<endl;
}
Point :: Point(int x, int y)
{
    a = x;
    b = y;
}
    
int main()
{
    Point a(100,3);
    Point b(75,2);

    distance(a,b);

    Point c(10,7);
    Point d(1,3);

    distance(c,d);

    return 0;
}