#include<iostream>
#include<vector>

using namespace std;

const int M=1e5+10;
vector<int> graph[M];
vector<pair<int,int>> graph2[M]; // when we need to store weight
int main(){
    /*
       Adjacency List
       O(u+v);
       N = 10^5
    */
    int node,edge,wight;
    cout<<"enter the number of nodes and edges"<<endl;
    cin>>node>>edge;
    
    int u,v;
    for(int i=0;i<edge;i++){
         cin>>u>>v;
         graph[u].push_back(v);
         graph[v].push_back(u);
    }
    
    cout<<"enter the number of nodes and edges and weight"<<endl;
    for(int i=0;i<edge;i++){
         cin>>u>>v>>wight;
         graph2[u].push_back({v,wight});
         graph2[v].push_back({u, wight});
    }



    return 0;
}