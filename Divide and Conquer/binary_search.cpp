#include <iostream>
using namespace std;

int binary_search(int a[], int first, int last, int val)
{
    while (first<=last)
    {
        int mid = (first+last)/2;
        if(a[mid]==val)
        {
            return mid;
        }
        else if(a[mid]<val)
        {
            first = mid+1;
        }
        else
        {
            last= mid-1;
        }
    }
    return -1;
}

int main()
{
    int a[]= {2,3,4,5,6,7,8};
    int n = sizeof(a)/sizeof(a[0]);
    int val = 7;
    int result= binary_search(a, 0, n-1, val );
    if(result==-1)
    {
        cout<<"not found";
    }
    else 
    {
        cout<<"found at "<<result;
    }
    return 0;
}