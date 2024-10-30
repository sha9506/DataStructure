// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int prec(char c)
{
    if(c == '^')
    {
        return 3;
    }
    else if(c == '*' || c == '/')
    {
        return 2;
    }
    else if(c == '+' || c == '-')
    {
        return 1;
    }
    
    else
    return -1;
}
void infixPrefix(string s) 
{
    stack<char> st;
    string result;
    
    int length = s.length();
    
    for(int i=length-1; i>=0; i--)
    {
        char c = s[i];
        
        if((c>='a'&& c<='z') || (c>='A' && c<='Z') || 
            (c<=0 && c>=9))
        {
            result += c;
        }
        
        else if(c == '(')
        {
            st.push('(');
        }
        else if(c==')')
        {
            while(st.top() !='(')
            {
                result += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while(!st.empty() && prec(c)<prec(st.top()))
            {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    
    while(!st.empty())
    {
        result += st.top();
        st.pop();
    }
    reverse(result.begin(), result.end());

    cout<<result;
}


int main() {
    string s = "x+y*z/w+u";
    infixPrefix(s);
 
    return 0;
}