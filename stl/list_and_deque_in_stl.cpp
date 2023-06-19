#include<iostream>
using namespace std;
//list is also like container which contains data.
void ExplainList()
{
   list<int> ls;
   ls.push_back(1);
   ls.emplace_back(2);
   ls.push_front(0);
   //rest of the function are same as vector.
  //like begin,end,rbegin,rend,clear,insert,size,capacity, etc.
}

//deque:

void ExplainDeque()
{
    deque<int> dq;
    dq.push_back(1);
    dq.push_front(0);
    dq.emplace_back(2);
    dq.emplce_front(22);
    dq.pop_back();
    dq.pop_front();
    dq.back();
    dq.front();
     //rest of the function are same as vector.
   //like begin,end,rbegin,rend,clear,insert,size,capacity, etc.

}



int main()
{
ExplainList();
}