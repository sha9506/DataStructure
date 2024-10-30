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

string postfixPrefix(string s)
{
    stack<string> st;
    
    int length = s.length();
    
    for(int i= 0; i<length; i++)
    {
        if(isOperand(s[i]))
        {
            string op1 = st.top();
            st.pop();
            string op2 = st.top();
            st.pop();
            
            string temp = s[i] + op2 + op1 ;
            st.push(temp);
        }
        else
        {
            st.push(string(1, s[i]));
        }
    }
    
   string result;
   while(!st.empty())
   {
       result += st.top();
       st.pop();
   }
   
   return result;
}

int main() {
    string pre_exp = "ABC/-AK/L-*";
    cout << "Prefix : " << postfixPrefix(pre_exp);
    return 0;
}