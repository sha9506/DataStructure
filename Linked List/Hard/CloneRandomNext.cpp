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
        Node* random;

        Node(int data)
        {
            this->data = data;
            this->next = random = NULL;
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

Node* clone(Node* head)
{
   unordered_map<Node*, Node*> mp;
   
   Node* curr = head;
   
   while(curr != NULL)
   {
       mp[curr] = new Node(curr->data);
       curr= curr->next;
   }
   
   curr = head;
   while(curr!=NULL)
   {
       mp[curr]->next = curr->next;
       mp[curr]->random = curr->random;
       
       curr= curr->next;
   }
   
   return mp[head];
}

int main() {
   
   Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->random = head->next->next;
    head->next->random = head;
    head->next->next->random = head->next->next->next->next;
    head->next->next->next->random = head->next->next;
    head->next->next->next->next->random = head->next;
       
    display(head);
    head = clone(head);
    display(head);
    return 0;
}