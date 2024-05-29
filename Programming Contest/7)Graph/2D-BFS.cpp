#include<bits/stdc++.h>

using namespace std;

const int N = 1e5+10;
vector<int> g[N];
int viseted[N];
int level[N];

void bfs(int source){
    queue<int> q;
    q.push(source);
    viseted[source] = 1;

    while(!q.empty()){
       int current_value = q.front();
       q.pop();
       for(int child : g[current_value]){
          if(!viseted[child]){
              q.push(child);
              viseted[child] = 1;
              level[child] = level[current_value];
          }
       }
    }
}
int main(){
    int node;
      
    cout<<"Eenter the number of nodes"<<endl; 
    cin>>node;

    for(int i=0;i<node-1;i++){
         int x,y;
         cin>>x>>y;
         g[x].push_back(y);
         g[y].push_back(x);
    }

    return 0;
}