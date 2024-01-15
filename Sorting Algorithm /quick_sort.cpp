#include <iostream>
using namespace std;

int partition(int a[], int low, int high)
{
    int pivot= a[high];
    
    int i = (low-1);
    
    for(int j=low; j<high; j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    
    swap(a[i+1], a[high]);
    return (i+1);
}

void quicksort(int a[], int low , int high)
{
    if(low<high)
    {
        int mid= partition(a, low, high);
        quicksort(a, low, mid-1);
        quicksort(a, mid+1, high);
    }
}

int main()
{
    int a[]= {2,34,6,2,7,3,1};
    int n= sizeof(a)/sizeof(a[0]);
    
    cout<<"before sort\n";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    quicksort(a,0, n-1);
    cout<<"\n after sort\n";
     for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}