
// unweighted graph

#include<iostream>
#include<vector>
using namespace std;

void printedge(vector<int>adj[],int V)
{
	for(int i=0;i<V;i++)
	{
		cout<<i;
		for(auto x: adj[i])
			cout<<" -> "<<x;
		cout<<endl;
	}
}

void addedge(vector <int> adj[],int v1,int v2)
{
	adj[v1].push_back(v2);
	adj[v2].push_back(v1);
}

int main()
{
	int V,E;
	cin>>V>>E;
	vector <int> adj[V];
	int v1,v2;
	for(int i=0;i<E;i++)
	{
		cin>>v1>>v2;
		addedge(adj,v1,v2);
	}
	printedge(adj,V);
}
