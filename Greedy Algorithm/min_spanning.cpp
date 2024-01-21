#include <iostream>
using namespace std;

void make_set(vector<int> & parent, vecotr<int> & rank, int n)
{
    for(int i=0; i<n; i++)
    {
        parent[i]=i; 
        rank[i]=0;
    }
}

int find_parent(vector<int> &parent, int node)
{
  if(parent[node]==node)
  {
      return node;
  }
  return parent[node]=find_parent(parent,parent[node]);
}

void union_set(int u, int v, vector<int> &parent)
{
    u=find_parent(parent,u);
    v=find_parent(parent, v);
    if(rank[u]<rank[v])
    {
        parent[u]=v;
    }
    else if(rank[u]>rank[v])
    {
        parent[v]=u;
    }
    else
    {
        parent[v]=u;
        rank[u]++;
    }
}

int minimum_spanning_tree(vector<vector<int>> & edges, int n)
{
    vector<int> parent(n);
    vector<int> rank(n);
    make_set(parent, rank, n);
}