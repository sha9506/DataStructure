// Online C++ compiler to run C++ program online
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



Node* segregate(Node* head1)
{
    Node* eStart = new Node(0);
    Node* eEnd = eStart;
    
    Node* oStart = new Node(0);
    Node* oEnd = oStart;
    
    Node* curr = head1;
    
    while(curr!=NULL)
    {
        int val = curr->data;
        
        if(val%2 == 0)
        {
            eEnd->next = curr;
            eEnd = eEnd->next;
        }
        else
        {
            oEnd->next = curr;
            oEnd = oEnd->next;
        }
        curr = curr->next;
    }
    
    eEnd->next = oStart->next;
    Node* newhead = eStart->next;
    
    delete oStart;
    delete eStart;
    
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

    display(head1);
    head1 = segregate(head1);
    display(head1);
    
    return 0;
}