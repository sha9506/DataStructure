// changing particular rows and columns to zero

#include <iostream>
using namespace std;

void zero_convert(int (&a)[2][3], int row, int column, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        a[i][column] = 0;
    }
    for (int j = 0; j < m; j++)
    {
        a[row][j] = 0;
    }
}

void show(const int (&a)[2][3], int n, int m)
{
    for (int i = 0; i < n; i++) // O(n)
    {
        for (int j = 0; j < m; j++) // O(m*n)
        {
            cout << a[i][j] << " "; // O(1)
        }
        cout << "\n"; // O(1)
    }
}

int main()
{
    int n = 2, m = 3; // O(1)

    int a[n][m] = {{2, 3, 4}, {5, 6, 7}}; // O(1)
    show(a, n, m);
    zero_convert(a, 0, 1, n, m);
    show(a, n, m);
    return 0; // O(1)
}
