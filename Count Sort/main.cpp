#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

int maximum(int A[], int n){
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < A[i])
        {
            max = A[i];
        }
    }
    return max;
}

void countSort(int *A, int n){
    int i, j;
    int max = maximum(A,n);
    int * count = (int *)malloc((max+1)*sizeof(int));

    for (int i = 0; i < max+1; i++)
    {
        count[i] = 0;
    }
    //increament the corresponding index in count array
    for (int i = 0; i < n; i++)
    {
        count[A[i]] = count[A[i]] + 1;
    }
    i = 0; //counter for count array
    j = 0; // counter for given array

    while(i <= max){
        if(count[i]>0){
            A[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else{
            i++;
        }
    }
}

int main()
{
    int A[] = {9, 12, 5, 6, 98, 85, 56};
    int n = 7;
    printArray(A, n);
    countSort(A, n);
    printArray(A, n);
    return 0;
}