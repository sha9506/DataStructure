// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack>
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

void alternate(Node* head1)
{
    stack<Node*> even;
    stack<Node*> odd;
    int i =1;
    
    while(head1 != nullptr)
    {
        if(head1->data % 2 == 0 && i%2 != 0)
        {
            even.push(head1);
        }
        else if(head1->data %2 != 0 && i%2 == 0)
        {
            odd.push(head1);
        }
        head1 = head1->next;
        i++;
    }
    
    while(!even.empty() && !odd.empty())
    {
        swap(even.top()->data , odd.top()->data);
        odd.pop();
        even.pop();
    }
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
    alternate(head1);
    display(head1);
    
    return 0;
}