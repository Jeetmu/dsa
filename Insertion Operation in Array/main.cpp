#include<iostream>
using namespace std;

void display(int arr[], int size)
{
    //code for traversal
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int indInsertion(int arr[], int size, int element1, int element2, int capacity, int index1, int index2)
{
    if (size >= capacity)
    {
        return -1;
    }
    //code for insertion
    if (index1 < index2)
    {
        for (int i = size-1; i >= index1; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[index1] = element1;

        for (int i = size-1; i >= index2; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[index2] = element2;
    }else
    {
        for (int i = size-1; i >= index2; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[index2] = element2;

        for (int i = size-1; i >= index1; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[index1] = element1;
    }
    return 1;
}

int main()
{
    int arr[100] = {7,25,65,85,95};
    int size = 5;
    int element1 = 300;
    int element2 = 101;
    int index1 = 3;
    int index2 = 2;
    display(arr, size);
    size += 2;
    indInsertion(arr, size, element1,element2, 100, index1, index2);
    cout << "After insertion of the new element "<<endl;
    // size+=2;
    display(arr, size);
    return 0;
}