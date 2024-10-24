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

Node* deleteNodes(Node* head)
{
    if(head == nullptr || head->next == nullptr)
    {
        return head;
    }
    
    Node* nextNode = deleteNodes(head->next);
    
    if(nextNode->data > head->data)
    {
        return nextNode;
    }
    
    head->next = nextNode;
    return head;
}

int main() {
   
    Node* head = new Node(12);
    head->next = new Node(15);
    head->next->next = new Node(10);
    head->next->next->next = new Node(11);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
       
    display(head);
    head = deleteNodes(head);
    display(head);
    return 0;
}