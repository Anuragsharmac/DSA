#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Dfs_visit(vector<int>Adj[],vector<int>&status,int i)
{
    status[i]=1;
    cout<<i;
    for(int j=0;j<Adj[i].size();j++)
    {
        if(status(Adj[i][j]==0))
        {
            Dfs-visit(Adj,status,Adj[i][j]);
        }
    }
}

void Dfs(vector<int>Adj[],int N)
{
    vector<int>status(N,0)
    for(int i =0;i<N;i++)
    {
        if(status[i]==0)
        {
            dfs_visit(Adj,status,i)
        }
    }
}