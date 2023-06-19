#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int dec_to_binary(int n)
{
   int binaryNum[32];
   int i = 0;
   while(n>0)
   {
    binaryNum[i] = n%2;
    n = n/2;
    i++;
   }
   for(int j = i-1;j >= 0;j--)
   {
    cout<<binaryNum[j];
   }
}

int main()
{
  int n = 114;
  dec_to_binary(n);
  return 0;
}
