#include<iostream>
using namespace std;
void reachHome(int src,int dest)
{
    cout<<"source:"<<src<<"=>destination:"<< dest<<endl;
    //base case;
    if(src == dest){
    cout<<"phucnh gya"<<endl;
    return;
    }
    src++;
   reachHome(src, dest);


}


int main()
{
    int src = 1;
    int dest = 20;
    cout<<endl;
    reachHome(src,dest);
}