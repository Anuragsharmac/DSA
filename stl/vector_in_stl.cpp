#include<iostream>
#include<vector>
using namespace std;

//vector.
//vector is a container which stores data as like arrays but it is dynamic in nature.
//it dynamicaly increase the size or it double the size.
//you can insert the element in vector even when you gave the intial size of vector.
void Explain_Vector()
{
//initialising.
//here v is an empty {} container which can store values further;
    vector<int> v;
//inserting value in it.
    v.push_back(1);
//emplace_back is same as push_back but faster then push_back;
    v.emplace_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
//accesing the elements of vector.
    for(int i= 0;i<=4;i++)
    {
     cout<<v[i]<<endl;
    }
    cout<<"************************************************************************************";
    
}
//pairs in side the vector.
void pairs_inSide_the_vector()
{
//decleration.
    vector<pair<int,int>> v;
    v.push_back({2,3});
//when we use emplace_back we don't need to use {} because it autometacilly understands its an pair.
    v.emplace_back(5,6);

    cout<<v[0].first<<endl;;
    cout<<v[0].second<<endl;
    cout<<v[1].first<<endl;
    cout<<v[1].second<<endl;
     cout<<"************************************************************************************";
    
}

//initial sizes of vector.
void initial_sizes_of_vector()
{
//v(10,0) => this line means it create a vector of size 10 and initialize all the elements by 0 like {0,0,0,0,0,0,0,0};
    vector<int>v(10,0);
    for(int i =0; i<=10; i++)
    {
        cout<<v[i]<<endl;
    }
//second example here we intialize all values by 8.
    vector<int>v1(10,8);
    for(int i =0; i<=10; i++)
    {
        cout<<v1[i]<<endl;
    }
     cout<<"************************************************************************************";
    

}

//We can also copy the content of one vector into another vector.
 void Copy_the_elements_of_firstVector_into_anotherVector()
 {
    vector<int>v(6,20); //v(6,20) ==> {20,20,20,20,20,20}.
    vector<int>v1(v);
    for(int i =0 ;i<=5; i++)
    {
        cout<<v1[i]<<endl;
    }
     cout<<"************************************************************************************";
    
 }

//Iterator => iterator points the memory location where the elemets are stored.
//{1,2,3} for 1 =>iterator points the memory location of 1.

void iterator_inStl()
{
//decliaration
    vector<int>v(7,6);
    vector<int>::iterator a = v.begin();

    // a++;
    // cout<<*(a)<<endl;
    // Anurag += 2;
    // cout<<*(a)<<endl;

//more iterators in c++ stl.
//1. =>  v.end()
//eg={1,2,3,4,5}  => itwerator end will not pointing 5 int this eg it points just after 5 next of the 5.
// => vector<int>::iterator a = v.end()
//2. => v.rend()  =>reverse end.
//now reverse end will first reverse the ele of eg then point just afte 5 {5,4,3,2,1}
// => vector<int>::iterator a = v.rend();
//3. => v.rbegin() =>reverse begin.
//it will reverse the ele the point the 5;
// => vector<int>::iterator a = v.rbegin();

//printing the elements.
for(vector<int>::iterator a = v.begin(); a != v.end();a++){
cout<<*(a)<<" "<<endl;
}
cout<<"***********************************************************************************"<<endl;

//second method of printing elements.using auto.
for(auto a = v.begin(); a!=v.end();a++)
{
    cout<<*(a)<<endl;
}
cout<<"***********************************************************************************"<<endl;

//third method of printing.
for(auto a : v){
    cout<<a<<endl;
}
}

//deleting or removing elements from vector in stl.

void removing_elemrnts_from_vector()
{
    vector<int>v;
//taking input in vector.
    for(auto i =0;i <= 9;i++)
    {
      v.push_back(i);
    }
//accessing.
    // for(auto i = v.begin(); i!=v.end();i++)
    // {
    //     cout<<*(i)<<endl;
    // }
//rmoving or deleting the elemet (4,5,6) from the vector.
//for removing we can usre .erase() function. which take two parameter start and end like .erase(start,end).
for(auto i = v.begin(); i!=v.end();i++)
    {
        v.erase(v.begin(),v.begin()+3);
        cout<<*(i)<<endl;
    }
   
}
//insert elements.
void insert_ele()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    //this here 3 is no of times i want to insert element and 0 is the value which i'm inserting in vector.
    v.insert(v.begin()+1,3,0);
    //here i use erase fun because i was geting a garbage value in my output at this instant.
    v.erase(v.end()-1);
    for(auto i = v.begin();i<=v.end();i++)
    {
        cout<<*(i)<<endl;
    }

}
//some more functions.
void some_more_functions()
{
    vector<int>v;
    for(auto i = 0;i<10;i++)
    {
        v.push_back(i);
    }
    for(auto i = v.begin();i!=v.end();i++)
    {
       // v.pop_back; => //it will pop or remove the last elememt.
        cout<<*(i)<<endl;
        //cout<<v.size  => it will give the size of vector;
        //v.capacity => it will give the capacity.
        //v1.swap(v2) => if u hv two vector you can swap them.
        //.clear()  =>will clear all elements of vector.
        //.empty() = it give boolean true or false.
    }
}



int main()
{
Explain_Vector();
pairs_inSide_the_vector();
initial_sizes_of_vector();
Copy_the_elements_of_firstVector_into_anotherVector();
 iterator_inStl();
removing_elemrnts_from_vector();
insert_ele();
}