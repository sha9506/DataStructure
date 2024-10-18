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


// Using nested while loop 

Node* duplicate(Node* head)
{
    Node* curr1 = head;
    
    while(curr1 != nullptr)
    {
        Node* curr2 = curr1;
        
        while(curr2->next!=nullptr)
        {
            if(curr1->data == curr2->next->data)
            {
                Node* dup = curr2->next;
                curr2->next = curr2->next->next;
                delete dup;
            }
            else
            {
                curr2 = curr2->next;
            }
        }
        
        curr1= curr1->next;
    }
    
    return head;
}

// Using HashSet DS 
Node* duplicate(Node* head)
{
   unordered_set<int> s;
   Node* curr = head;
   Node* prev = nullptr;
   
   while(curr!= NULL)
   {
       if(s.find(curr->data) != s.end())
       {
           prev->next = curr->next;
           
           Node* temp = curr;
           curr = curr->next;
           
           delete temp;
       }
       else
       {
           s.insert(curr->data);
           prev = curr;
           curr= curr->next;
       }
   }
   return head;
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
    head->next->next->next->next = new Node(0);

   display(head);
   cout<<"\n";
   duplicate(head);
   display(head);
   
    return 0;
}