#include<iostream>
using namespace std;
void selectionSort(int arr[],int n)
{
  
  for(int i = 0;i < n-1;i++)
    {
      int minIndex = i;
       for(int j = i + 1;j < n;j++)
         {
           if(arr[minIndex] > arr[j]){
           minIndex = j;
             
         }
          
      }
       swap(arr[minIndex],arr[i]);
    }
  }
int main()
  {
    int arr[10] = {8,5,6,2,4,1,0,85,93,12};
    selectionSort(arr,10);
    for(int i = 0;i<=9;i++){
      cout<<arr[i]<<" ";
    }
  }