#include <iostream>
using namespace std;

const int N = 1e5+2;

bool vis[N];
vector<int> adj[N];


int main()
{
    for(int i=0; i<N; i++)
    {
        vis[i]=0;
    }
    int n, m; //vertices and edges
    cin>>n>>m;

    int x,y;
    for(int i=0; i<m; i++)
    {
        cin>>x>>y;
        
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    
    queue<int> q;
    q.push(1); 
    vis[1]= true; //visited 
    
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        cout<<node<<endl;
        
        vector<int> :: iterator it;
        for(it = adj[])
    }
    return 0;
    
}