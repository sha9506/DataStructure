// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack>
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


// Using Pointer 
Node* reverse(Node* head1, int k)
{
    Node* newhead = nullptr;
    Node* tail = nullptr;
    Node* curr = head1;
    
    while(curr != nullptr)
    {
        Node* grouphead = curr;
        Node* prev = nullptr;
        Node* next = nullptr;
        int count = 0;
        
        while(curr != nullptr && count<k)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        
        if(newhead == nullptr)
        {
            newhead = prev;
        }
        if(tail != nullptr)
        {
            tail->next = prev;
        }
        
        tail = grouphead;
    }
    return newhead;
}

void display(Node* head1)
{
    while(head1!=nullptr)
    {
        cout<<head1->data<<"->";
        head1=head1->next;
    }
    cout<<"\n";
}

int main() {
    Node *head1 = new Node(10);
    head1->next = new Node(15);
    head1->next->next = new Node(30);
    head1->next->next->next = new Node(6);
    head1->next->next->next->next = new Node(9);
    
    int k =4 ;

    display(head1);
    head1 = reverse(head1, k);
    display(head1);
    
    return 0;
}