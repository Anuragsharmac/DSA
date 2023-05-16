#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int main(){
    int N,E,a,b;
    cout<<"enter the no of vertices in the graph:";
    cin>>N;
    cout<<"enter the no of edges in the graph";
    cin>>E;
    vector<int>AdjList[N];
   for(int i =1;i<E;i++){
    cout<<"enter the end point of edges "<<i;
    cin>>a>>b;
    AdjList[a].push_back(b);
   }
}
