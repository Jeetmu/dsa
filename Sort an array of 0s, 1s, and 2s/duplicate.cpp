#include<iostream>
using namespace std;

class Solution{
    public:
    void sort012(int a[], int n)
    {
        int temp;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] < a[i])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    }
};

int main()
{
    Solution b;
    int a[] = {3,15,2,5,7,0,12,1};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Given array is" <<endl;
    for (int i = 0; i < n; i++)
    {
        cout<< a[i] << " ";
    }
    cout << endl;
    b.sort012(a, n);
    cout << "The sorted array is " <<endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
