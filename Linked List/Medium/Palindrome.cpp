#include <iostream>
#include<bits/stdc++.h>
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


// Using Stack DS 
bool reverse(Node* head)
{
    stack<int> s;
    Node* temp = head;
    while(temp!=nullptr)
    {
        s.push(temp->data);
        temp = temp->next;
    }
    while(!s.empty())
    {
        
        if(head->data != s.top())
        {
            return false;
        }
        s.pop();
        head = head->next;
    }
    return true;
}

// Using pointer 
bool reverse(Node* head)
{
    Node* curr = head;
    Node* prev = nullptr;
    Node* next;
    while(curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    
    while(head)
    {
        
        if(head->data != prev->data)
        {
            return false;
        }
        prev = prev->next;
        head = head->next;
    }
    return true;
}




void display(Node* head)
{
    while(head!=nullptr)
    {
        cout<<head->data<<"->";
        head = head->next;
    }
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(20);
    head->next->next->next->next = new Node(10);

   display(head);
   cout<<"\n reverse \n";
    cout<<reverse(head);
    return 0;
}