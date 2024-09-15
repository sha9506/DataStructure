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

int size_list(Node* head)
{
    if(head==nullptr)
    {
        return 0;
    }
    
    return 1+size_list(head->next);
}

int middle(Node* head, int position)
{

    while(position!=0)
    {
        head= head->next;
        position--;
    }
    
    return head->data;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    
    cout<<size_list(head)<<endl;
    
    int mid = size_list(head) / 2;
    
    cout<<middle(head, mid);
    
    
    

    return 0;
}