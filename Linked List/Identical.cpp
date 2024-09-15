// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node{
    public:
     int data;
     Node* next = next;
     
     Node(int data)
     {
         this->data= data;
         this->next= nullptr;
     }
};

bool identical(Node* head1, Node* head2)
{
    while(head1!=nullptr && head2!= nullptr)
    {
        if(head1->data!= head2->data)
            return false;
        
        head1= head1->next;
        head2 = head2->next;
    }
    
    return (head1==nullptr && head2==nullptr);
}

int main() {
    Node* head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);
    
    Node* head2 = new Node(1);
    head2->next = new Node(2);
    head2->next->next = new Node(3);
    
    if(identical(head1 , head2))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    
    

    return 0;
}