#include <iostream>
#include <climits>
using namespace std;
#include <vector>

void largest(vector<int> elements)
{
    int first = INT_MIN;
    int second;
    int third;
    for (int i = 0; i < elements.size(); i++)
    {
        if (elements[i] > first)
        {
            third = second;
            second = first;
            first = elements[i];
        }
        else if (elements[i] > second && elements[i] != first)
        {
            third = second;
            second = elements[i];
        }
        else if (elements[i] > third && elements[i] != second && elements[i] != first)
        {
            third = elements[i];
        }
    }
    cout << first << "\n";
    cout << second << "\n";
    cout << third << "\n";
}
int main()
{
    vector<int> elements = {1, 5, 3, 5, 322, 4};
    largest(elements);

    return 0;
}