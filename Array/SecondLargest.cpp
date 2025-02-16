// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int secondLargest(int arr[], int n)
{
    int max = -999;
    
    int secondMax;
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max){
            secondMax = max;
            max = arr[i];
            
        }
    }
    
    return secondMax;
}

int main() {
   int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int result = secondLargest(arr, n);
    
    cout << "Element is " << result;
    return 0;
}