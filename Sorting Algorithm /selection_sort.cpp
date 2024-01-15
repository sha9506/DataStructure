#include <iostream>
using namespace std;

void selection_sort(int a[], int n)
{
    int i, j, min;
    
    for(int i=0; i<n-1; i++)
    {
        min=i;
        for(int j=i+1; j<n; j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            swap(a[min],a[i]);
        }
    }
}

int main()
{
    int a[]= {2,42,6,2,53,4};
    int n= sizeof(a)/sizeof(a[0]);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nafter sort\n";
    selection_sort(a, n);
      for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}