#include <iostream>
using namespace std;

void insertion_sort(int a[], int n)
{
    int i, j, key;
     for(int i=1; i<n; i++)
     {
         key = a[i];
         j= i-1;
         
         while(j>=0 && a[j]>key)
         {
             a[j+1]=a[j];
             j=j-1;
         }
         a[j+1]= key;
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
   insertion_sort(a, n);
      for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}