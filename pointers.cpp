#include<iostream>
using namespace std;
int main()
{
    int num = 5;
    cout<<"address is:"<<&num<<endl;
    cout<<num<<endl;
    int *ptr = &num;
    cout<<ptr<<endl;
    cout<<"value is :"<<*ptr<<endl;
}