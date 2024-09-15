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

Node* move(Node* head, int position)
{
    if(head==nullptr)
    {
        return head;
    }
    
    Node* temp = head;
    Node* prev = nullptr;

    while(position--)
    {
        prev = temp;
        temp= temp->next;
    }
    
    prev->next = prev->next->next;
    temp->next = head;
    head = temp;
    
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
    
    head = move(head, mid);
    display(head);
    
    
    

    return 0;
}