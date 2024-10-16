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


int detect_Loop(Node* head)
{
    Node* slow = head;
    Node* fast = head;
    
    // Slow pointer will increment by 1 step and fast by 2 steps where they meet implies loop 
    while(slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow == fast)
        {
            return 1;
        }
    }
    
    return 0;
}



// Using hash set we check if the value is already present in the set 

bool detect_Loop1(Node* head)
{
    unordered_set<Node*>temp;

    while(head!= nullptr)
    {
        if(temp.find(head) != temp.end())
        {
            return true;
        }

        temp.insert(head);

        head = head->next;
    }

    return false;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    // head->next->next->next->next = head;
    
    if(detect_Loop(head)==1)
    {
        cout<<"True";
    }
    else 
    {
        cout<<"false";
    }
    
    return 0;
}