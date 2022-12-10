#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    cout<<str<<endl;
    str.resize(13);
    cout<< str <<endl;
   cout<< str.capacity()<<endl;
   str.shrink_to_fit();
    cout<<str<<endl;
    cout<<str.length()<<endl;

}