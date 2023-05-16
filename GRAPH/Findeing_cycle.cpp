#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int DFS_Rec(int i,vector<int>&status,vector<int>InRec)
{
    vector<int>Adj[];
    status[i]=1;
    InRec[i]=1;
    for(int j = 0;j<Adj[i].size();j++)
    {
        neg = Adj[i][j];
        if(status[neg]==0)
        {
        c = DEF_Rec(neg,status,InRec);
        }
        else if(InRec[reg]==1)
        return 1;
    }
    InRec[i]=0;
    return 0;
}
void DFS(vector<int>Adj[],int N)
{
    
    vector<int>status(N,0);
    vector<int>InRec(N,0);
    for(int i = 0; i <N ;i++)
    {
      if(status[i]==0)
      {
      int c = DFS_Rec(i,status,InRec);
       if(c==1)
       return 1;
      }
    }
    return 0;
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
int a = DFS(Adj,N);
if(a==1)
{
    cout<<"Cycle formed";
}
else{
    cout<<"cycle not formed";
}
}