#include<iostream>
#include<string>
using namespace std;

class binary
{
    private:
        string s;
        void chk_bin(void);
    public:
        void read(void);
        void conversion(void);
        void display(void);
};

void binary :: read(void)
{
    cout << "Enter the binary number:" << endl;
    cin >> s;
}

void binary :: chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Wrong Digits! Please try again" << endl;
            exit(0);
        }
    }
}

void binary :: conversion(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }else
        {
            s.at(i) = '0';
        }
    }
}

void binary :: display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    binary b;
    b.read();
    b.conversion();
    b.display();

    return 0;
}