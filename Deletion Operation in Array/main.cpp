#include<iostream>
using namespace std;

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int indDeletion(int arr[], int size, int index)
{
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int arr[100] = {2,5,6,7,8};
    int size = 5;
    int index = 1;
    display(arr, size);
    indDeletion(arr,size,index);
    size -= 1;
    display(arr,size);
    return 0;
}