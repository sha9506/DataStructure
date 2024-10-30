// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;

bool isOperand(char c)
{
    switch(c)
    {
        case '+':
        case '-':
        case '*':
        case '/':
        case '%':
        case '^':
        return true;
    }
    return false;
}

string prefixInfix(string s)
{
    stack<string> st;
    
    int length = s.length();
    
    for(int i= length -1; i>=0; i--)
    {
        if(isOperand(s[i]))
        {
            string op1 = st.top();
            st.pop();
            string op2 = st.top();
            st.pop();
            
            string temp = "(" + op1 + s[i] + op2 + ")";
            st.push(temp);
        }
        else
        {
            st.push(string(1, s[i]));
        }
    }
    
    return st.top();
}

int main() {
    string pre_exp = "*-A/BC-/AKL";
    cout << "Infix : " << prefixInfix(pre_exp);
    return 0;
}