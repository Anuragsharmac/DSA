#include<iostream>
using namespace std;
bool isPrime(int a){
    if(a&1){
        return 0;
    }
    else{
        return 1;
    }
}
int main()
{
    int num;
    cin>>num;
    if(isPrime(num)){
        cout<<"Number is not even"<<endl;
       
    }
    else
    {
    cout<<"Number is even"<<endl;
    }
}