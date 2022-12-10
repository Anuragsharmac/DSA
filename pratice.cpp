#include<iostream>
using namespace std;
bool palindrome(char name[], int n){
    int s=0;
    int e=n-1;
    for(int i=0;i<n;i++){
        if(name[s]!=name[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
int main(){
    char name[20];
    cout<<"enter the name"<<endl;
    cin>>name;
    cout<<name;
    if(palindrome(name,5)){
        cout<<"this is a palindrome number"<<endl;

    }
    else{
        cout<<"this is not a plindrome number"<<endl;
    }

}