#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void DFS_visit(vector<int>Adj[],vector<int>&status,int i)
{
  status[i]=1;
  cout<<i;
  for(int j = 0; j < Adj[i].size();j++)
  {
    if(status[Adj[i][j]]==0)
    {
        DFS_visit(Adj,status,Adj[i][j]);
    }
  }
}
void DFS(vector<int>Adj[],int N)
{
    vector<int>status(N,0);
    for(int i = 0; i <N ;i++)
    {
      if(status[i]==0)
      {
        DFS_visit(Adj,status,i);
      }
    }
}

int main()
{
    int N,E,i,a,b;
    cout<<"Enter the number of vertices in the graph:";
    cin>>N;
    vector<int>Adj[N];
    cout<<"Enter the numbre of edges in the graph:";
    cin>>E;
    for(int i = 0 ; i<E ;i++)
    {
        cout<<"Enter the end points of the vertice of the graph "<<i+1<<":";
        cin>>a>>b;
        Adj[a].push_back(b);
        Adj[b].push_back(a);

    }

    for(int i = 0;i<N ; i++)
    {
        int j = 0;
        cout<<i<<":";
        for(int j = 0; j<Adj[i].size(); j++)
        {
            cout<<Adj[i][j]<<",";
       }
        cout<<endl;
    }
    cout<<"Order of DFS is =>";
    DFS(Adj,N);
    return 0;
}
