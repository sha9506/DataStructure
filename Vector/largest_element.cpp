#include <iostream>
#include <vector>
using namespace std;
#include <climits>

int largest_element(vector<int> elements)
{
    int max = INT_MIN;
    for (int i = 0; i < elements.size(); i++)
    {
        if (elements[i] > max)
        {
            max = elements[i];
        }
    }
    return max;
}

int main()
{
    vector<int> elements = {10, 5, 2, 1, 5, 7, 9};
    cout << largest_element(elements);

    return 0;
}