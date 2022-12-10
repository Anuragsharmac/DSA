#include<iostream>
using namespace std;
void reverse_string(char name[],int n)
{ 
    int start = 0;
    int end = n-1;
  while(start<end){
  swap(name[start++],name[end--]);
  }
}
int getLenght(char name[])
{
    int count = 0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;    
    }
    return count;
}                                                                                                                                                                                 

int main()
{    
    
    char name[20];
    cout<<"Enter your name:"<<endl;
    cin>>name;
    int len = getLenght(name);
    cout<<"lenght of your name is:"<<len<<endl;
    reverse_string(name,len);
    cout<<"reverse name is:"<<name<<endl;
    return 0;
}