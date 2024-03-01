#include<iostream>
using namespace std;

int adj[100][100];
int main(){
    
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