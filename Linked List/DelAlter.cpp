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

Node* delAlter(Node* head)
{
    if(head==nullptr)
    {
        return head;
    }
    
    Node* temp =head;
    Node* node = head->next;
    
    while(temp!=nullptr && node!= nullptr)
    {
        temp->next = node->next;
        delete(node);
        
        temp= temp->next;
        if(temp!= nullptr)
        {
            node = node->next;
        }
    }
    
    return head;
}

void display(Node* head)
{
    cout<<'\n';
    while(head!=nullptr)
    {
        cout<<head->data<<"->";
        head = head->next;
    }
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    
    cout<<size_list(head)<<endl;
    
    int mid = size_list(head)/2;
    
    cout<<endl;
    cout<<"linked list:"<<endl;
    display(head);
    
    delAlter(head);
    display(head);
    
    
    

    return 0;
}