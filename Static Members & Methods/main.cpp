#include<iostream>
using namespace std;

class Employee
{
    int id;
    static int count;
    public:
        void setData(void){
            cout<< "Enter the ID of the employee" << endl;
            cin >> id;
            count++;
        }
        void getData(void){
            cout<< "Your Employee ID number is "<<id<<" and count is "<<count<<endl;
        }
        static void getCount(void){
            cout<< "Your Count is "<<count<<endl; 
        }
};
int Employee :: count;

int main()
{
    Employee a,b,c;

    for (int i = 0; i < 5; i++)
    {
        a.setData();
        a.getData();
        Employee::getCount;
    }
    return 0;
}