// Rearrange an array in maximum minimum form 

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void array(int a[], int n)
{
    int b[n];
    
    int beg = 0;
    int end = n-1;
    int flag = true;
    
    for(int i=0; i<n; i++)
    {
        if(flag)
        {
            b[i]=a[end--];
        }
        else
        {
            b[i]=a[beg++];
        }
        
        flag = !flag;
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