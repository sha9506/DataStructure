// Left Rotation O(n*d) ; Space O(1)

#include <iostream>
using namespace std;

void lRotate(int a[], int n, int d)
{
    int p = 1;
    while (p <= d)
    {
        int temp = a[0];
        for (int i = 0; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        a[n - 1] = temp;
        p++;
    }
}

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(a) / sizeof(a[0]);
    int d = 2;
    display(a, n);
    lRotate(a, n, d);
    display(a, n);

    return 0;
}

// Right Rotation using a temp array O(N): space O(N)

#include <iostream>
using namespace std;

void rRotate(int a[], int n, int d)
{
    int b[n];

    int j = 0;

    for (int i = n - d; i < n; i++)
    {
        b[j] = a[i];
        j++;
    }

    for (int i = 0; i < n; i++)
    {
        b[j] = a[i];
        j++;
    }

    for (int i = 0; i < n; i++)
    {
        a[i] = b[i];
    }
}

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(a) / sizeof(a[0]);
    int d = 2;
    display(a, n);
    rRotate(a, n, d);
    display(a, n);

    return 0;
}
