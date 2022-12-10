#include<iostream>
using namespace std;
bool LinearSearch(int arr[],int size,int key){
  for(int i = 0; i < size; i++)
  {
    if(arr[i] == key){
      return 1;
    }
  }
  return 0;
}
int main()
{
  int key;
  int arr[10];
   cout<<"Enter your elements:"<<endl;
  for(int i = 0;i<11;i++){
   
    cin>>arr[i];
  }
  cout<<"Enter the key you want to found"<<endl;
  
  cin>>key;
  bool found = LinearSearch(arr,10,key);
  if(found){
    cout<<"Entered key is present:"<<endl;
   
    }
  else{
    cout<<"Entered key is not present ";
    }
  
    return 0;
}