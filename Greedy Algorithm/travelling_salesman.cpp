#include <iostream>
using namespace std;

#define INT_MAX 999999
int n = 4;

int dist[10][10] = {
	{ 0,20,42,25},
	{ 20,0,30,34 }, 
	{ 42,30,0,10 },
	{ 25,34,10,0 },
};

int VISITED_ALL = (1<<n)-1;

int travel(int pos, int mask)
{
    if(mask =VISITED_ALL)
    {
        return dist[pos][0];
    }
    
    int cost = INT_MAX;
    
    for(int i =0;i<n; i++)
    {
        if((mask &(1<<i))==0)
        {
            int newans = dist[pos][i] + travel(mask|(1<<i),i);
            cost = min(cost, newans );
        }
    }
    return cost;
}

int main()
{
    cout<<travel(1,0)<<endl;
    return 0;
}

