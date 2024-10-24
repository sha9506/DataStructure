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
        Node* bottom;
        
        Node(int data)
        {
            this->data = data;
            this->next = bottom = NULL;
        }
};

Node* flatten(Node* root)
{
    vector<int> values;
    while(root != NULL)
    {
        values.push_back(root->data);
        
        Node* temp = root->bottom;

        while(temp!=NULL)
        {
            values.push_back(temp->data);
            temp = temp->bottom;
        }
        root = root->next;
    }
    
    sort(values.begin(), values.end());
    
    Node* head = NULL;
    Node* tail = NULL;
    for(int i=0; i<values.size(); i++)
    {
        Node* newNode = new Node(values[i]);
        if(head == NULL)
        {
            head = newNode;
        }
        else
        {
            tail->bottom = newNode;
        }
        tail = newNode;
    }
    return head;
}

void display(Node* head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->bottom;
    }
    cout<<"\n";
}

int main() {
   
     Node* head = new Node(5);
    head->bottom = new Node(7);
    head->bottom->bottom = new Node(8);
    head->bottom->bottom->bottom = new Node(30);

    head->next = new Node(10);
    head->next->bottom = new Node(20);

    head->next->next = new Node(19);
    head->next->next->bottom = new Node(22);
    head->next->next->bottom->bottom = new Node(50);

    head->next->next->next = new Node(28);
       
    head = flatten(head);
    display(head);
    
    return 0;
}