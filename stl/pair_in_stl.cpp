#include<iostream>
using namespace std;

void Explain_pair(){
    //how to declare the pare
    //pair only have two elements in it it we want more then two we can use nested pair;
    pair<int,int>p={2,9};
    //this is the way of accessing the pair.
    cout<<p.first<<endl;
    cout<<p.second<<endl;
}
//Nested pair.
void Explain_nested_pair()
{
    //declearation of nested pair.

    pair<int, pair<int, pair<int,int>>>p = {1,{2,{3,4}}};

    //accessing the pair.
    cout<<p.first<<endl;
    cout<<p.second.first<<endl;
    cout<<p.second.second.first<<endl;
    cout<<p.second.second.second<<endl;
}

void nested_pair()
{
    pair<int,pair<int,pair<int,pair<int,int>>>> p = {5,{6,{7,{8,9}}}};
    cout<<p.first<<endl;
    cout<<p.second.first<<endl;
    cout<<p.second.second.first<<endl;
    cout<<p.second.second.second.first<<endl;
    cout<<p.second.second.second.second<<endl;
}

//Array of pairs
//we can aslo make arrays of pair.

void Array_of_pairs()
{
    //declaring the arrays of pairs.
    pair<int,int> p[] = {{1,2},{3,4},{5,6},{7,8},{9,0}};

    //accesing them

    cout<<p[0].first<<endl;
    cout<<p[0].second<<endl;
    cout<<p[1].first<<endl;
    cout<<p[1].second<<endl;
    cout<<p[2].first<<endl;
    cout<<p[2].second<<endl;
    cout<<p[3].first<<endl;
    cout<<p[3].second<<endl;
    cout<<p[4].first<<endl;
    cout<<p[4].second<<endl;
    
}
void Array_of_pairs_and_accesing_them_using_forloop()
{
    //declaring the arrays of pairs.
    pair<int,int> p[] = {{1,2},{3,4},{5,6},{7,8},{9,0}};

    //accesing.
    for(int i =0;i<5; i++)
    {
        cout<<p[i].first<<endl<<p[i].second<<endl;
    }
    cout<<endl;

}


int main()
{
Explain_pair();
Explain_nested_pair();
nested_pair();
Array_of_pairs();
Array_of_pairs_and_accesing_them_using_forloop();
}



