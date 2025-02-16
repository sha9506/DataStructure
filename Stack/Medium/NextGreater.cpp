// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void nextGreater(int a[], int n)
{
    stack<int> st;
    
    st.push(a[0]);
    for(int i = 1; i<n; i++)
    {
        if(st.empty())
        {
            st.push(a[i]);
            continue;
        }
        
        while(!st.empty() && st.top() < a[i])
        {
            cout<<st.top()<<"->"<<a[i]<<endl;
            st.pop();
        }
        st.push(a[i]);
    }
    
    while (!st.empty()) {
        cout << st.top() << "->" << -1 << endl;
        st.pop();
    }
}

 
int main() 
{ 
    int a[] = { 11, 13, 21, 3 };
    int n = sizeof(a) / sizeof(a[0]);
    nextGreater(a, n);
    return 0;
    
    return 0 ;
}
