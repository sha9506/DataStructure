#include <iostream>
using namespace std;

void activity_select(int s[], int f[], int n)
{
    int i, j;
    
    cout<<"the activities selectes: \n";
    i =0;
    cout<<i<<" ";
    
    for(j=1; j<n; j++)
    {
        if(s[j]>f[i])
        {
            cout<<j<<" ";
            i=j;
        }
    }
}

int main()
{
    int s[] = {1,3,0,5,8,5};
    int f[] = {2,4,6,7,9,9};
    int n = sizeof(s)/sizeof(s[0]);
    activity_select(s,f,n);
    
    return 0;
    
}