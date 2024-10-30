/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
       ListNode* lesshead = new ListNode(0);
       ListNode* greathead = new ListNode(0);

       ListNode* less = lesshead;
       ListNode* great = greathead;

      while(head!=nullptr)
      {
        if(head->val <x)
        {
            less->next = head;
            less = less->next;
        }
        else
        {
            great->next = head;
            great = great->next;
        }

        head = head->next;
      }

      great->next = nullptr;

      less->next = greathead->next;

      return lesshead->next;
    }
};