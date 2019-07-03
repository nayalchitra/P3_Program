
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void addedge(vector<pair<int,int> >adj[],int v1,int v2,int wt)
{
    adj[v1].push_back(make_pair(v2,wt));
    adj[v2].push_back(make_pair(v1,wt));
}

void printedge(vector<pair<int,int> >adj[],int V)
{
    int i;
    for(i=0;i<V;i++)
    {
        cout<<i;
        for(auto it=adj[i].begin();it<adj[i].end();it++)
            cout<<" -> "<<it->first<<" "<<it->second;
        cout<<endl;
    }
}

int main()
{
    int V,E,wt;
    cin>>V>>E;
    int v1,v2;
    vector<pair<int,int> >adj[V];
    int i;
    for(i=0;i<E;i++)
    {
        cin>>v1>>v2>>wt;
        addedge(adj,v1,v2,wt);
    }
    printedge(adj,V);
}

