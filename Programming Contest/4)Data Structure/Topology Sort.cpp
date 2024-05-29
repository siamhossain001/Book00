# include <cstdio>
# include <cstring>
# include <cmath>
# include <vector>
# include <stack>
# include <iostream>
# include <list>
#define white 0
#define gray 1
#define black 2
using namespace std;

# define MAX 100008
# define Inf 1<<29

int T_Case,U,V,W,Node,Edges,Color[MAX],Count,TT;
stack<int>Topo;
struct Edge{
 int Vertex;
 Edge(){};
 Edge(int vv){
  Vertex=vv;
 }
};

vector<Edge>Adj[MAX],adj_back[MAX];

void DFS_Visit(int u,vector<Edge>Adj[MAX]){
	int v,i;
    Color[u]=gray;

	  for(i=0;i<Adj[u].size();i++){

		v=Adj[u][i].Vertex;

		if(Color[v]==white)
		  DFS_Visit(v,Adj);
	  }
		Topo.push(u);
	  	Color[u]=black;
}
void SCC_DFS_Visit(int u,vector<Edge>Adj[MAX]){
        int v,i;
	   Color[u]=gray;

	  for(i=0;i<Adj[u].size();i++){

		v=Adj[u][i].Vertex;

		if(Color[v]==white)
		  SCC_DFS_Visit(v,Adj);
	  }
	  	Color[u]=black;
}

void DFS(vector<Edge>Adj[MAX]){

	int u;
	for(u=1;u<=Node;u++)Color[u]=white;

	for(u=1;u<=Node;u++){
		if(Color[u]==white){
			DFS_Visit(u,Adj);//run dfs all node reason 
		}
	}

}

void SCC_DFS(vector<Edge>Adj[MAX]){

	int u;
	TT=1;
	for(u=1;u<=Node;u++)Color[u]=white;

	while(!(Topo.empty())){
		u=Topo.top();
		Topo.pop();
		if(Color[u]==white){
			SCC_DFS_Visit(u,Adj);
			++Count;
		}
	}

}
int main(){

    //freopen("In.txt","r",stdin);
    //freopen("Out.txt","w",stdout);
    int i,c=0;
     while(scanf("%d",&T_Case)==1){
         while(T_Case--){

              scanf("%d%d",&Node,&Edges);

              for(i=0;i<=Node;i++){
                Adj[i].clear();
                adj_back[i].clear();
              }

              while(Edges--){
                   scanf("%d%d",&U,&V);
                   Adj[U].push_back(Edge(V));
                 // adj_back[V].push_back(Edge(U));
              }
              DFS(Adj);
              SCC_DFS(Adj);
              c++;
              printf("Case %d: %d\n",c,Count);
              Count=0;
         }


    }

	return 0;
}
