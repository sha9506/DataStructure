/***Algorithm**➖

bubbleSort(array)  
 n = length(array)  
repeat  
   swapped = **false**  
   **for** i = 1 to n - 1  
          **if** array[i - 1] > array[i], then  
          swap(array[i - 1], array[i])  
          swapped = **true**  
          end **if**  
    end **for**  
    n = n - 1  
  until not swapped  
 end bubbleSort*/

 #include <iostream>
using namespace std;

void bubble_sort(int a[], int n)
{
    int i, j ,temp;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp= a[i];
                a[i]=a[j];
                a[j]=temp;
            }
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
    bubble_sort(a, n);
      for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}