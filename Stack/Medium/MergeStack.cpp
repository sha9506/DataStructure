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
    public:
        Node* head;
        Node* tail;
        
        Stack()
        {
            head = NULL;
            tail = NULL;
        }
};
Stack* create() 
{ 
    Stack* s = new Stack(); 
    return s; 
} 
 
void push(int data, Stack* s) 
{ 
    Node* temp = new Node(data); 
    temp->data = data; 
    temp->next = s->head; 
 
    if (s->head == NULL) 
        s->tail = temp; 
     
    s->head = temp; 
} 
 
int pop(Stack* s) 
{ 
    if (s->head == NULL) { 
        cout << "stack underflow" << endl; 
        return 0; 
    } 
    else { 
        Node* temp = s->head; 
        s->head = s->head->next; 
        int popped = temp->data; 
        delete temp; 
        return popped; 
    } 
} 

void merge(Stack* s1, Stack* s2) 
{ 
if (s1->head == NULL) 
{ 
    s1->head = s2->head; 
    s1->tail = s2->tail; 
    return; 
} 
     
s1->tail->next = s2->head; 
s1->tail = s2->tail; 
} 
 
void display(Stack* s) 
{ 
    Node* temp = s->head; 
    while (temp != NULL) { 
        cout << temp->data << " "; 
        temp = temp->next; 
    } 
} 
 
int main() 
{ 
    Stack* s1 = create(); 
    Stack* s2 = create(); 
 
    push(6, s1); 
    push(5, s1); 
    push(4, s1); 
    push(9, s2); 
    push(8, s2); 
    push(7, s2); 
    merge(s1, s2); 
    display(s1); 
    
    return 0 ;
}
