#include<iostream>
using namespace std;
void PrintArray(int arr[],int n){
  for(int i = 0;i < n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
void AlternateSorting(int arr[],int size){
  for(int i = 0; i < size;i+=2){
    if(i+1 < size){
      swap(arr[i],arr[i+1]);
    }
  }
}
int main()
{
  int even[6] = {1,2,3,4,5,6};
  int odd[5] = {6,7,8,9,4};
  AlternateSorting(even,6);
  PrintArray(even,6);
  AlternateSorting(odd,5);
  PrintArray(odd,5);
  cout<<endl;
}