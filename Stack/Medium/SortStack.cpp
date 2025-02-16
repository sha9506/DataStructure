
#include <bits/stdc++.h>
using namespace std;

stack<int> sortStack(stack<int> &input)
{
	stack<int> st;

	while (!input.empty())
	{
		int temp = input.top();
		input.pop();

	
		while (!st.empty() && st.top() < temp)
		{
			input.push(st.top());
			st.pop();
		}

		st.push(temp);
	}

	return st;
}

int main()
{
	stack<int> input;
	input.push(34);
	input.push(3);
	input.push(31);
	input.push(98);
	input.push(92);
	input.push(23);

	stack<int> tmpStack = sortStack(input);
	cout << "Sorted numbers are:\n";

	while (!tmpStack.empty())
	{
		cout << tmpStack.top()<< " ";
		tmpStack.pop();
	}
}
