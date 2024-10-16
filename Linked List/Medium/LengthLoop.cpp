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


int countNode(Node* slow)
{
    int count = 1;
    Node* temp = slow;
    
    while(temp!= slow)
    {
        count++;
        temp = temp->next;
    }
    
    return count;
}

int detect_Loop(Node* head)
{
    Node* slow = head;
    Node* fast = head;
    
    while(slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow == fast)
        {
           return countNode(slow);
        }
    }
    
    return 0;
}


// Using unordered_set 

int detect_Loop(Node* head)
{
    
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    head->next->next->next->next = head->next;
    
    cout<<detect_Loop(head);
    
    return 0;
}