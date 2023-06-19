#include<iostream>
using namespace std;

bool checkPelindrom(string &str,int i,int j)
{
    //base case;
    if(i>j)
      return true;

    if(str[i] != str[j])
    {
        return false;
    }
    else{
        return checkPelindrom(str,i+1,j-1);
    }
}

int main()
{
    string name = "abbccbba";
    bool ans = checkPelindrom(name,0,name.length()-1);
    if(ans)
    {
        cout<<"this name is pelindrom: "<<endl;
    }
    else{
        cout<<"this name is not a pelindrom: ";
    }

}
