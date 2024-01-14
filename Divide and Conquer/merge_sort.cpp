#include <iostream>
using namespace std;

void merge(int a[], int beg, int mid, int end)
{
    int n1= mid - beg +1;
    int n2= end -mid;
    int i, j ,k;
    
    int left_array[n1];
    int right_array[n2];
    
    for(int i=0; i<n1; i++)
    {
        left_array[i]=a[beg+i];
    }
    for(int j=0; j<n2; j++)
    {
        right_array[j]=a[mid+1+j];
    }
    
    i=0;
    j=0;
    k= beg;
    
    while(i<n1 && j<n2)
    {
        if(left_array[i]<= right_array[j])
        {
            a[k]=left_array[i];
            i++;
        }
        else 
        {
            a[k]=right_array[j];
            j++;
        }
        k++;
    }
    
    while(i<n1)
    {
        a[k]=left_array[i];
        i++;
        k++;
    }
    
    while(j<n2)
    {
        a[k]=right_array[j];
        j++;
        k++;
    }
}

void merge_sort(int a[], int beg, int end)
{
    if(beg<end)
    {
        int mid = (beg+end)/2;
        merge_sort(a, beg, mid);
        merge_sort(a, mid+1, end);
        merge(a, beg,mid, end);
    }
}

void print(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int a[]= {4,5,72,8,3,5,75,3};
    int n= sizeof(a)/sizeof(a[0]);
    cout<<"before merge sort"<<"\n";
    print(a, n);
    merge_sort(a,0,n-1);
    cout<<"\n after sort \n";
    print(a,n);
    return 0;
}