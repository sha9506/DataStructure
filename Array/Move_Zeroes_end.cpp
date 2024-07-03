
#include <iostream>
using namespace std;

void zeroEnd(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
            {
                if(a[i]==0)
                {
                      swap(a[i],a[j]);
                 }

            }
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
    int a[] = {0,2,0,3,7,0,4,0};
    int n = sizeof(a)/sizeof(a[0]);
    cout << "Before"<<endl;
    display(a,n);
    cout<<"after"<<endl;
    zeroEnd(a, n);
    display(a, n);

    return 0;
}