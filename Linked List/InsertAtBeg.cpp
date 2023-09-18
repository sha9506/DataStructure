/*insert a node at the beginning of the linked list*/

#include <iostream>
using namespace std;

struct Node
{
   int data;
   struct Node* next;
};

void push_beg(struct Node** head, int input_data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = input_data;
    newNode->next = *head;
    *head = newNode;
} 

void display(struct Node* element)
{
    while(element!=NULL)
    {
        cout<<element->data<<"\n";
        element = element->next;
    }
}
int main() {
   Node* head= NULL;
   push_beg(&head,20);
   push_beg(&head,30);
   push_beg(&head,50);
   display(head);
    return 0;
}