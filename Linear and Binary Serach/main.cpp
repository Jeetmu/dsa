#include<iostream>
using namespace std;

//traversal
int display(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
//sorting
class Sorting{
    public:
    void sorting(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp; 
            }   
        }   
    }
}
};

//liner
int linerSearch(int arr[], int element, int size)
{
    for (int i = 0; i < size ; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
// binary
int binarySearch(int arr[], int element, int size)
{
    int low, mid, high;
    low = 0;
    high = size-1;

    while(low<=high)
    {
        mid = (low + high)/2;
        if (arr[mid] == element)
        {
            return mid;
        } else if (arr[mid] < element) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{   
    //unsorted array - liner search
    int arr[] = {1,5,2,55,88,42,65,32,83};
    int element = 83;
    int size = sizeof(arr)/sizeof(arr[0]);
    display(arr, size);
    int searchIndex = linerSearch(arr, element, size);
    cout << "Liner Search element " <<element <<" was found at index "<< searchIndex <<endl;

    //sorted array - binary search
    int a[] = {1,2,3,4,5,6,8,9,15,88,98};
    int ele = 15;
    int s = sizeof(a)/sizeof(arr[0]);
    display(a,s);
    int binaryIndex = binarySearch(a,ele,size);
    cout << "Binary Search Element "<<ele << " was found at index "<< binaryIndex <<endl;

    //sorting of unsorted array
    Sorting b;
    b.sorting(arr, size);
    cout << "The sorted array is "<< endl;
    display(arr, size); 
    return 0;
}