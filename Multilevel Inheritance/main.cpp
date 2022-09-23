#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_Number;
    public:
        void set_roll_number(int);
        void get_roll_number();
};
void Student :: set_roll_number(int r){
    roll_Number = r;
}
void Student :: get_roll_number(){
    cout << "The roll NUmber is "<< roll_Number << endl;
};

class Exam : public Student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float, float);
        void get_marks(void);
};

void Exam :: set_marks(float m1, float m2){
    maths = m1;
    physics = m2;
};

void Exam :: get_marks(){
    cout << "The marks obtained in maths are: " << maths<< endl;
    cout << "The marks obtained in physics are :  "<<physics<< endl;
}

class Result : public Exam{
    float percentage;
    public:
        void display(){
            get_roll_number();
            get_marks();
            cout<< "Your percentage is "<< (maths + physics)/2<<"%"<<endl;
        };
};

int main()
{
    Result h1;
    h1.set_roll_number(520);
    h1.set_marks(94.23, 90);
    h1.display();
    return 0;
}