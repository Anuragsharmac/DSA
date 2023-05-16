#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int V,E;
    cout<<"enter the no of vertices:";
    cin>>V;
    cout<<"enter the no of edges:";
    cin>>E;
    vector<int>Adj[V];
    vector<int>DAT(E,0);
    for(int i= 0;i<E;i++)
    {
     int a,b;
     cout<<"enter the end points "<<i+1<<":";
     cin>>a>>b;
     Adj[a].push_back(b);
     DAT[b]++;//a---->b we have to pus b in DAT end point:
     //for undirected graph:
     //Adj[b].push_back(a);
     }
     cout<<"Adjecency list:"<<endl;
     for(int i = 0;i<V;i++)
     {
        cout<<i<<": ";
        for(int j = 0;j<Adj[i].size();j++)
        {
        cout<<Adj[i][j]<<",";

        }
        cout<<endl;
     }
     cout<<"Outdegree is:"<<endl;
     for(int i=0;i<V;i++)
     {
        cout<<i<<": "<<Adj[i].size()<<endl;
     }
     cout<<endl;
     cout<<"Indegree is:"<<endl;
     for(int i=0;i<V;i++)
     {
        cout<<i<<": "<<DAT[i]<<endl;
     }
}