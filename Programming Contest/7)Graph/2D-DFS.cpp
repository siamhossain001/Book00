#include<iostream>
#include<vector>
using namespace std;
const int N = 1e3+10;

vector<int> Graph[N];
bool colour[N];

void dfs(int vertex){
    /*
       take action on vertex after entering
       the vertex
    */
   colour[vertex] = true;
    for(int child : Graph[vertex]){
        if(colour[vertex]) continue;
        /* 
           take action on child before
           entering the child node
        */
       dfs(child); 
       /*
          take action on child 
          after exiting child node
       */
    }
    /*
       take action on vertex before
       exiting the vertex
    */
}
int main(){
    int node,edge;
    cout<<"Enter the number of nodes and edges: "<<endl;
    cin>>node>>edge;

    for(int i=0;i<edge;i++){
        int u,v;
        cin>>u>>v;
        Graph[u].push_back(v);
        Graph[v].push_back(u);
    }

    return 0;
}