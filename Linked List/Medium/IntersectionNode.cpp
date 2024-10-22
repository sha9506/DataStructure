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

// Using Nested Loop 
Node* intersection(Node* head1, Node* head2)
{
    while(head2 != NULL )
    {
        Node* temp = head1;
        
        while(temp)
        {
            if(temp==head2)
            {
                return head2;
            }
            temp = temp->next;
        }
        head2 = head2->next;
    }
    
    return NULL;
}


// Using two pointer method 

Node* intersection(Node* head1, Node* head2)
{
    Node* ptr1 = head1;
    Node* ptr2 = head2;
    
    if(ptr1 == NULL || ptr2 == NULL)
    {
        return NULL;
    }
    while(ptr1 != ptr2)
    {
        ptr1 = ptr1? ptr1->next : head2;
        ptr2 = ptr2? ptr2->next : head1;
        
    }
    return ptr1;
}


int main() {
    Node *head1 = new Node(10);
    head1->next = new Node(15);
    head1->next->next = new Node(30);

    Node *head2 = new Node(3);  
    head2->next = new Node(6);
    head2->next->next = new Node(9);
    head2->next->next->next = head1->next;

    Node* temp2 = intersection(head1 , head2);
    if(intersection==NULL)
    {
        cout<<"No";
    }
    else
    {
        cout<<temp2->data;
    }

    return 0;
}