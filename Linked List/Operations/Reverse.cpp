#include <iostream>
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


// using pointer 

Node* reverse(Node* head)
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
    
    return prev;
}

// using stack data structure 

Node* reverse(Node* head)
{
    stack<Node*> s;
    Node* temp = head;
    while(temp->next!=NULL)
    {
        s.push(temp);
        temp = temp->next;
    }
    head = temp;
    while(!s.empty())
    {
        temp->next = s.top();
        s.pop();
        temp = temp->next;
    }
    temp->next = NULL;
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
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

   display(head);
   cout<<"\n reverse \n";
   head = reverse(head);
   display(head);
    
    return 0;
}