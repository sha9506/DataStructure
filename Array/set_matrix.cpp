// change 0 to 1 in particular rows and columns

#include <iostream>
using namespace std;

void sample_change(int (&a)[5][5], int row, int column, int n, int m) // O(m)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i][column] == 1)
        {
            a[i][column] = -1;
        }
    } // O(n)
    for (int j = 0; j < m; j++)
    {
        if (a[row][j] == 1)
        {
            a[row][j] = -1;
        }
    } // O(m)
}

void display(int (&a)[5][5], int n, int m)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    } // O(n*m)
}

int main()
{
    int n = 5;
    int m = 5;

    int a[5][5] = {
        {1, 1, 0, 1, 0},
        {1, 0, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1}};
    cout << "before\n";
    display(a, n, m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 0)
            {
                sample_change(a, i, j, n, m); // O(m)
            }
        }
    } // O(n*m*m)
    cout << "mid\n";
    display(a, n, m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == -1)
            {
                a[i][j] = 0;
            }
        }
    } // O(n*m)
    cout << "after\n";
    display(a, n, m);
    return 0;
}
