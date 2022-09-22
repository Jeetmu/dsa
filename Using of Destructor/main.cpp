#include<iostream>
using namespace std;

int cont = 0;
// destructor never takes argument
class number
{   
    public:
        number(){
            cont++;
            cout<<"This is the time when constructor is called for object number "<<cont<<endl;
        }
        ~number(){
            cout<<"This is the time when my destructor is called for object number "<<cont<<endl;
            cont--;
        }
};

int main()
{
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    number n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        number n2, n3;
         cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}