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

int size_list(Node* node)
{
   int count = 1;
   Node* temp = node;
   while(temp->next!=node)
   {
       count++;
       temp = temp->next;
   }
   
   return count;
}

int numLoop(Node* head)
{
    Node* temp = head;
    Node* temp2 =head;
    
    while(temp!=nullptr && temp2!=nullptr && temp2->next!= nullptr)
    {
        temp = temp->next;
        temp2 = temp2->next->next;
        
        if(temp==temp2)
        {
            cout<<size_list(temp)<<endl;
            break;
        }
    }
    
    return 0;
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
    head->next->next->next->next = new Node(5);

    //loop from 5 to 2
    head->next->next->next->next->next = head->next;
    
    
    cout<<"linked list:"<<endl;
    numLoop(head);

    
    

    return 0;
}