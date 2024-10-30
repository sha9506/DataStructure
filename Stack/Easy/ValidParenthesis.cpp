// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool validParenthesis(string s) 
{
   stack<char> st;
   
   for(int i =0 ;i<s.length(); i++)
   {
       char c = s[i];
       
       if(c=='(' || c == '{' || c== '[')
       {
           st.push(c);
       }
       
       else
       {
           if(!st.empty() && 
               ( (st.top()=='(' && c == ')' )||
                (st.top()=='{' && c == '}') || 
                (st.top()=='[' && c == ']')))
           {
               st.pop();
           }
           else
           {
               return false;
           }
       }
   }
   
   return true;
}


int main() {
    string s = "[(])";
    if(validParenthesis(s))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}