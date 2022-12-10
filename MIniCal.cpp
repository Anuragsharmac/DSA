#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"Enter the frist number:"<<endl;
cin>>a;
cout<<"Enter the second number:"<<endl;
cin>>b;
char op;
cout<<"Enter the opration you want  to perform:"<<endl;
cin>>op;
switch (op)
{
    case '+':
    cout<<a+b<<endl;
    break;
    case '-':
    cout<<a-b<<endl;
    break;
    case '%':
    cout<<a%b<<endl;
    break;
    case '/':
    cout<<a/b<<endl;
    break;
    case '*':
    cout<<a*b<<endl;
}

}