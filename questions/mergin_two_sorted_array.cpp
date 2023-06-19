#include<iostream>
#include<vector>
using namespace std;
void Merging_two_sorted_array(int arr1[],int arr2[],int arr3[],int n, int m){
    int i =0 ,j =0 ,k=0;
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
           arr3[k++]=arr1[i++];
        }
        else
        {
           arr3[k++]=arr2[j++];
        }
    }

    while(i<n)
    {
        arr3[k++]=arr1[i++];
    }
    while(j<m)
    {
        arr3[k++]=arr2[j++];
    }
}


void print(int ans[],int n)
{
    for(int i =0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int arr1[6]={2,4,5,6,8,9};
    int arr2[3]={1,3,7};
    int arr3[9]={0};
    Merging_two_sorted_array(arr1,arr2,arr3,6,3);
    print(arr3,9);

}