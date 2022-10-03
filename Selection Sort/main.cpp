#include<iostream>
#include<cstdlib>
using namespace std;

void printArray(int * A, int n){
    for (int i = 0; i < n; i++)
    {
        cout <<  A[i] <<" ";
    }
    cout<< endl;
}

void selectionSort(int * A, int n){
    int indexofMin, temp;
    cout << "Running selection sort .."<< endl;
    for (int i = 0; i < n-1; i++)
    {
        indexofMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[indexofMin])
            {
                indexofMin = j;
            }
        }
        temp = A[i];
        A[i] = A[indexofMin];
        A[indexofMin] = temp;
    }
}

int main()
{
    int A[] = {3, 5, 2, 13, 12};
    int n = 5;
    printArray(A, n);
    selectionSort(A, n);
    printArray(A, n);

    return 0;
}