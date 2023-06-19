#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void explain_map()
{
    //map stores ele in form of key and value pair;
    //map<key,value>
    //key ccan have of any datatype;
    //** map stores unique krys int sorted order;
    map<int, int> mpp;
    //here key is int and value is int;

    map<int,pair<int,int>>mpp;
   //here key is int and vlaue is pair or two integer;

    map<pair<int,int>,int>mpp;
    //her key is pair and vlaue is int;


//mpp[key]=value;
//here 1-->is key and 2--> is value;
mpp[1]=2;

mpp.emplace({3,1});
// here 3 is key and 1 is value;
mpp.insert({2,4});


mpp[{2,3}]=10;
//here {2,3} is key which is pair and 10 is value;

for(auto it:mpp)
{
    cout<<it.first<<" "<<it.second<<endl;
}
cout<<mpp[1];
cout<<mpp[5];

auto it = mpp.find(3);
cout<<*(it).second;

auto it = mpp.find(5);
auto it = mpp.lower_bound(2);//this is the syntex;
auto it = mpp.upper_bound(3);
//erase,swap,size,empty are same as others

}


void map_example()
{
int main() {
  map < int, int > mp;
  for (int i = 1; i <= 5; i++) {
    mp.insert({i , i * 10});
  }

  cout << "Elements present in the map: " << endl;
  cout << "Key\tElement" << endl;
  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it -> first << "\t" << it -> second << endl;
  }

  int n = 2;
  if (mp.find(2) != mp.end())
    cout << n << " is present in map" << endl;

  mp.erase(mp.begin());
  cout << "Elements after deleting the first element: " << endl;
  cout << "Key\tElement" << endl;
  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it -> first << "\t" << it -> second << endl;
  }

  cout << "The size of the map is: " << mp.size() << endl;

  if (mp.empty() == false)
    cout << "The map is not empty " << endl;
  else
    cout << "The map is empty" << endl;
  mp.clear();
  cout << "Size of the map after clearing all the elements: " << mp.size();
}
}


//MULTIMAP
void explain_mulitmap()
{
//it is same as map the only diff is that it can store the duplticte elements too;
//only map[key] can not be used here;
}

//UNORDERED MAP
void explain_unordered_map()
{
    //same as set and unoredered set difffrence;
}

//extra things to know
void explain_extra()
{
    //sort ==> sort(start,end)-->here start is included but end is not enlcuded so do (end-1) if you want end;
    sort(a,a+n);
    sort(v.begin, v.end());
    sort(a+2,a+4);
}
int main()
{

 map_example();

}