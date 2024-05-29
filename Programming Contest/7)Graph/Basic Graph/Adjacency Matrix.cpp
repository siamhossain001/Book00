#include<iostream>
using namespace std;

const int N = 1e3+10;
int adj[N][N];

int main(){
    /*
         adjacency matrix
         O(N^2) --- space complexity
         N = 10^5
    */    
    int node,edge;
    cout<<"enter the number of nodes and edges"<<endl;
    cin>>node>>edge;
    
    int u,v;
    for(int i=0;i<edge;i++){
         cin>>u>>v;
         adj[u][v]=1;
         adj[v][u]=1;
    }


    return 0;
}