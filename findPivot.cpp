#include<iostream>
using namespace std;
int findPivot(int arr[],int n)
{
  int start = 0;
  int end = n-1;
  int mid = start + (end - start)/2;
  while(start < end){
  if(arr[mid] >= arr[0])
  {
    start = mid + 1;
  }
  else
  {
    end = mid;
  }
  mid = start + (end - start)/2;
    }
  return start;
}
int main()
{
  int arr[7] = {86,57,34,76,12,41,1};
  cout<<"Pivot element is:"<<findPivot(arr,7)<<endl;
}