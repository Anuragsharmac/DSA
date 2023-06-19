//in set  every elements are stored in sorted and unique.
//reapeted elements are not there in set.
#include<iostream>
#include<set>
using namespace std;

void explainSet()
{
    set<int>st;
    st.insert(1);//{1}
    st.emplace(2);//{1,2}
    st.insert(3);//{1,2,3}
    st.insert(3);//{1,2,3} -->repetion are not allowed.
    st.insert(4);//{1,2,3,4}
    st.insert(5);//{1,2,3,4,5}
   
   //functionality of insert in vector can ued also that only 
   //increases efficiency.
   //begin() ,end(), rbegin(), rend(), size(), empty() and swap()
   //are same as vector.
   auto it = st.find(3);
   auto it = st.find(6);//there is no 6 in the set so it will give last elemet st.end();
   
   st.erase(5);//erase 5 it takes algorithimic time.
   

   int count = st.count(1);//give the no of occurence of one btw set is unique but still you should know.

   auto it1 = st.find(2);
   auto it2 = st.find(4);//after erase {1,4,5} [first,last)

   //lower_bound() and upper_bound() function works in the same
   //as in vector it does.

   //this is the syntex.
   auto it= st.lower_bound(2);
   auto it = st.upper_bound(3);

}


void setCodeExample()
{
    set < int > s;
  for (int i = 1; i <= 10; i++) {
    s.insert(i);
  }

  cout << "Elements present in the set: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;
  int n = 2;
  if (s.find(2) != s.end())
    cout << n << " is present in set" << endl;

  s.erase(s.begin());
  cout << "Elements after deleting the first element: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;

  cout << "The size of the set is: " << s.size() << endl;

  if (s.empty() == false)
    cout << "The set is not empty " << endl;
  else
    cout << "The set is empty" << endl;
  s.clear();
  cout << "Size of the set after clearing all the elements: " << s.size();
}

void explain_multiset()
//everything is same as set
//only diffrences ins it can stores duplicates also.
//sorted but not unique.
{
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    
    ms.erase(1);//all 1's erased;

    //only a single one erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1),ms.find(1)+2);
    //erase all functions same as set.
}
int main()
{
    
    setCodeExample();
}

//unordered set
//lower_bound and upper_bound function
//does not works, rest all function are same as set
//it does not stores elemet in sorted order
//it has better complexity then set in most cases,except some when
//coloision happens.
void explain_unOrdered_set()
{
    unordered set<int> st;
}