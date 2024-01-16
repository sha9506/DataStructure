#include <iostream>
using namespace std;

#define INF 999

int V, source, cost[100][100];
int dist[100];
bool visited[100]= {0} ;
int parent[100];


void initialize()
{
    for(int i=0; i<V; i++)
    {
        parent[i]=i;
        dist[i]= INF;
    }
    
    dist[source]=0;
}

int get_near_node()
{
    int min= INF;
    int min_node =0 ;
    for(int i=0; i<V; i++)
    {
        if(!visited[i] && dist[i]<min)
        {
            min= dist[i];
            min_node = i;
        }
    }
    
    return min_node;
}

void dij()
{
    for(int i=0; i<V; i++)
    {
        int nearest = get_near_node();
        visited[nearest] = true;
        
        for(int adj = 0; adj<V; adj++)
        {
            if(cost[nearest][adj]!= INF && 
            dist[adj]>dist[nearest]+cost[nearest][adj])
            /*updating*/
            {
                dist[adj]= dist[nearest]+cost[nearest][adj];
                parent[adj]= nearest;
            }
        }
    }

}

void display()
{
    cout<<"Node:\t\t\t : \t\t\tPath";
    
    for(int i=0; i<V; i++)
    {
        cout<<i<<"\t\t\t"<<dist[i]<<"\t\t\t"<<" ";
        
        cout<<i<<" ";
        int parnode= parent[i];
        
        while(parnode!=source)
        {
            cout<<"<--"<<parnode<<" ";
            parnode= parent[parnode];
        }
        cout<<endl;
    }
}

int main()
{
    cout<<"number of vertices : ";
    cin>>V;
    for(int i =0; i<V; i++)
    {
        for(int j=0; j<V; j++)
        {
            cin>>cost[i][j];
        }
    }
    cout<<"source node: ";
    cin>>source;
    initialize();
    dij();
    display();
    
}

