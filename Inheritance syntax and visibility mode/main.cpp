#include<iostream>
using namespace std;

class Employee
{
    public:
        int id;
        float salary;
        int age;
        Employee(int inpID)
        {
            id = inpID;
            salary = 34.0;
            age = 24;
        }
        Employee(){}
};
class Programmer : public Employee{
    public:
        int languageCode;
        Programmer(int inID)
        {
            id = inID;
            languageCode = 9;
        }
        void getData(){
            cout<<id<<endl;
        }
};

int main()
{
    Employee h(1), a(2);
    cout<<h.salary<<endl;
    cout<<a.age<<endl;
    Programmer s(10);
    cout << s.languageCode<<endl;
    cout<< s.id<<endl;
    s.getData();
    return 0;
}