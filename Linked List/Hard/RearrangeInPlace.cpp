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
Node* reverse(Node* head)
{
    Node* prev = nullptr;
    Node* next;
    Node* curr = head;
    while(curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
Node* clone(Node* head)
{
    Node* slow = head; 
    Node* fast = slow->next;
    while(fast && fast->next)
    {
        slow= slow->next;
        fast = fast->next->next;
    }
    Node* head1 = head;
    Node* head2 = slow->next;
    slow->next = NULL;
    
    head2 = reverse(head2);
    head = new Node(0);
    Node* curr = head;
    while(head1 || head2)
    {
        if(head1)
        {
            curr->next = head1;
            head1 = head1->next;
            curr = curr->next;
        }
        if(head2)
        {
            curr->next = head2;
            head2 = head2->next;
            curr = curr->next;
        }
    }
    
    return head->next;
}

int main() {
   
   Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
       
    display(head);
    head = clone(head);
    display(head);
    return 0;
}