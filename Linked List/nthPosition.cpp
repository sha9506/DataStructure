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

int nth(Node* head, int position)
{
    if(head==nullptr)
        return -1;
    
    if(position==1)
        return head->data;
    
    return nth(head->next , position-1);
   
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    
    cout<<size_list(head)<<endl;
    
    int mid = size_list(head) / 2;
    
    cout<<nth(head, 3);
    
    
    

    return 0;
}




// O(n) and space O(1)

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

int nth(Node* head, int position)
{
    Node* temp = head;
    int i=1;
    while(temp!=nullptr)
    {
        if(i==position){
            return temp->data;
        }
        i++;
        temp= temp->next;
    }
    
    return -1;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    
    cout<<size_list(head)<<endl;
    
    int mid = size_list(head) / 2;
    
    cout<<nth(head, 5);
    
    
    

    return 0;
}