// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;
        
        Node(int data)
        {
            this->data = data;
            this->next = nullptr;
        }
};

class Stack
{
    Node* head;
    public:
        Stack()
        {
            this->head = nullptr;
        }
        
        bool isEmpty()
        {
            return head==nullptr;
        }
        
        void push(int data)
        {
            Node* newNode = new Node(data);
            
            if(!newNode)
            {
                cout<<"Stack Overflow\n";
            }
            newNode->next = head;
            head = newNode;
        }
        
        void pop()
        {
            if(this->isEmpty())
            {
                cout<<"Stack Underflow\n";
            }
            else
            {
                Node* temp = head;
                head = head->next;
            
                delete temp;
            }
        }
        
        int peek()
        {
            if(!isEmpty())
            {
                return head->data;
            }
            else
            {
                cout<<"Stack is empty\n";
                return 0;
            }
        }
};


int main() {
    class Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<s.peek()<<"\n";

    while(!s.isEmpty())
    {
        cout<<s.peek()<<"->";
        s.pop();
    }
   
    return 0;
}