#include<iostream>
using namespace std;

int factorial(int n)
{
    //base case.
    //return statment is nessusry in base case.
    if(n==0)
      return 1;

    return n * factorial(n-1);

}


int main(){
    int n;
    cout<<"enter a number:"<<endl;
    cin>>n;
    int ans = factorial(n);
    cout<<ans<<endl;
    return 0;
}