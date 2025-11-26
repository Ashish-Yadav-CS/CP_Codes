#include<iostream>
#include<vector>
using namespace std;
void addedge(vector<int> adj[],int u,int v)
{
adj[u].push_back(v);
adj[v].push_back(u);
}
void printgraph(vector<int> adj[],int v)
{
   for(int i=0;i<v;i++)
	{
	cout<<i<<" ";
	for(j:adj[i])
		{
		cout<<j<<" ";
		}
	cout<<endl;
	}
}
int main()
{
int v=3;
vector<int> adj[v];
addedge(adj,0,2);
addedge(adj,1,2);
addedge(adj,2,0);
addedge(adj,2,1);
printgraph(adj,v);
}


