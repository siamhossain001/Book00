#include<iostream>
#include<vector>

using namespace std;

const int M=1e5+10;
vector<int> graph[M];


int main(){
    int node,edge;

    cin>>node>>edge;
    int u,v;
    cout<<"enter the number of nodes and edges and weight"<<endl;
    for(int i=0;i<edge;i++){
         cin>>u>>v;
         graph[u].push_back(v);
         graph[v].push_back(u);
    }



    return 0;
}