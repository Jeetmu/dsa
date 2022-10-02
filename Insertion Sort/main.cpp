#include <iostream>
#include <cstdlib>
using namespace std;

void display(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

void insertionSort(int *A, int n)
{
    int key;
    int j;
    for (int i = 1; i <= n - 1; i++)
    {
        key = A[i]; //23
        j = i - 1; //3
        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key; //[7,12,19,23,54,65]
    }
}

int main()
{
    int A[] = {12, 54, 65, 7, 23, 19};
    int n = 6;
    display(A, n);
    insertionSort(A, n);
    display(A, n);
    return 0;
}