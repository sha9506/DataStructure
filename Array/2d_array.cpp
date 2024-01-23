#include <iostream>
using namespace std;

int main()
{
    int n = 2, m = 3; // O(1)

    int a[n][m] = {{2, 3, 4}, {5, 6, 7}}; // O(1)

    for (int i = 0; i < n; i++) // O(n)
    {
        for (int j = 0; j < m; j++) // O(m*n)
        {
            cout << a[i][j] << " "; // O(1)
        }
        cout << "\n"; // O(1)
    }

    return 0; // O(1)
}

// minimum time complexity for matrix traversal is O(n*m)
