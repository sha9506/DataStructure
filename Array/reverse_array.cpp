// Using O(n) Complexity

#include <iostream>
using namespace std;

void reverse(int a[], int n)
{
    int rev[n];
    for (int i = 0; i < n; i++)
    {
        rev[i] = a[n - 1 - i];
        cout << rev[i] << " ";
    }
}

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int n = 6;
    int a[n] = {1, 2, 3, 4, 5, 6};
    display(a, n);
    cout << endl;
    reverse(a, n);

    return 0;
}

// Using O(1) Space Complexity

#include <iostream>
using namespace std;

void reverse(int a[], int n, int start)
{
    while (start < n)
    {
        int temp = a[start];
        a[start] = a[n];
        a[n] = temp;
        start++;
        n--;
    }
}

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int n = 6;
    int a[n] = {1, 2, 3, 4, 5, 6};
    display(a, n);
    cout << endl;
    reverse(a, n - 1, 0);
    display(a, n);

    return 0;
}
