#include<iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    //base case;
    if(size == 0 || size == 1)
    {
        return true;
    }

    if(arr[0]>arr[1])
        return false;
    else{
            bool remaning = isSorted(arr+1,size - 1);
            return remaning;
        }
    
}

int mian()
{
    int arr[] = {1,2,3,4,5};
    int size = 5;
    
    bool ans = isSorted(arr,size);

    if(ans)
    {
        cout<<"Array is sorted :)";
    }
    else{
        cout<<"Array is not sorted :(";
    }
}