// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define MAX 1000

class Stack
{
    int top;
    public:
        int a[MAX];
        Stack()
        {
            top = -1;
        }
        
        bool push(int x);
        int peek();
        bool isEmpty();
        int pop();
};

bool Stack::push(int x)
{
    if(top >= MAX -1)
    {
        cout<<"stack overflow\n";
        return false;
    }
    else
    {
        a[++top] = x;
        cout<<x<<"is pushed into the stack\n";
        return true;
    }
}

int Stack::peek()
{
    if(top<0)
    {
        cout<<"stack underflow";
        return 0;
    }
    else
    {
        int x = a[top];
        return x;
    }
}

bool Stack::isEmpty()
{
    return (top<0);
}

int Stack::pop()
{
    if(top<0)
    {
        cout<<"stack underflow";
        return 0;
    }
    else
    {
        int x = a[top--];
        cout<<x<<"\n";
        return x;
    }
}

int main() {
    class Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.peek();
    s.pop();
    
    while(!s.isEmpty())
    {
        cout<<s.peek()<<"->";
        s.pop();
    }
   
    return 0;
}