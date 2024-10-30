// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;

bool isOperand(char c)
{
    if((c >= 'a' && c <= 'z') || (c>= 'A' && c<= 'Z'))
    {
        return true;
    }
    return false;
}

string postfixInfix(string s)
{
    stack<string> st;
    
    int length = s.length();
    
    for(int i= 0; i<length; i++)
    {
        if(isOperand(s[i]))
        {
            st.push(string(1, s[i]));
            
        }
        else
        {
            string op1 = st.top();
            st.pop();
            string op2 = st.top();
            st.pop();
            
            string temp = "(" + op2 + s[i] +  op1 + ")" ;
            st.push(temp);
        }
    }
    
   return st.top();
}

int main() {
    string pre_exp = "ab*c+";
    cout << "Infix : " << postfixInfix(pre_exp);
    return 0;
}