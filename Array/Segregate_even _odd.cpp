#include <iostream>
using namespace std;

void array(int a[], int n)
{
    int b[n];
    int count=0;
    int start=0;
    int end =n-1;
    
    for(int i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            b[start++]=a[i];
            count++;
        }
    }
    for(int i=0; i<n-1; i++)
    {
        if(a[i]%2!=0)
        {
            b[count++]=a[i];
        }
    }
    for(int i=0; i<n; i++)
    {
        a[i]=b[i];
    }
}

void display(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main() {
   int a[]={1,2,3,4,5,6};
   int n = sizeof(a)/sizeof(a[0]);
   display(a, n);
   array(a, n);
   display(a,n);
   

    return 0;
}