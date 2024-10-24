// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
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

Node* altReverse(Node* head, int k)
{
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;
    int count = 0;
    
    while(curr != NULL && count<k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    
    if(head != NULL)
    {
        head->next = curr;
    }
    
    count = 0;
    while(count < k-1 && curr != NULL)
    {
        curr = curr->next;
        count++;
    }
    
    if(curr!=NULL)
    {
        curr->next = altReverse(curr->next , k);
    }
    return prev;
}

void display(Node* head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"\n";
}

int main() {
   
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
       
    head = altReverse(head, 2);
    display(head);
    
    return 0;
}