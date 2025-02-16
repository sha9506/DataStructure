#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int value)
{
    while(low<high)
    {
        int mid =low + (high - low )/2;
        
        if(arr[mid]==value)
        {
            return mid;
        }
        else if(arr[mid]>value)
        {
            high = mid -1;
        }
        else
        {
            low = mid+1;
        }
    }
    
    return -1;
}

int main() {
   int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int result = binarySearch(arr, 0, n - 1, x);
    
    if(result == -1) cout << "Element is not present in array";
    else cout << "Element is present at index " << result;
    return 0;
}