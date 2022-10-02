#include<iostream>
#include<cstdlib>
using namespace std;

void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        cout <<  A[i]<< " " ;
    }
    cout << endl;
}
void bubbleSort(int *A, int n){
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n-1; i++) //for number of pass
    {   
        cout << "Working on pass number " << i+1<< endl;
        isSorted = 1;
        for (int j = 0; j < n-1-i; j++) //for comparison in each pass
        {
            if(A[j] > A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                isSorted = 0;
            }
        }
        if(isSorted){
            return;
        }
    }
}

int main()
{
    // int A[] = {12, 54, 65, 7, 23, 9};
    //adaptive
    int A[] = {1, 2, 3, 4, 5, 9};
    int n = 6;

    printArray(A,n);   
    bubbleSort(A,n);
    printArray(A,n);
    return 0;
}