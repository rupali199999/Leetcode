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
    ListNode* secondLast(ListNode* head)
    {
        ListNode* p=head;
        while(p->next->next!=NULL)
        {
            p=p->next;
        }
        return p;
    }
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return ;
        ListNode* curr=head;
        while(curr->next!=NULL)
        {
            ListNode* nxt=curr->next;
            //find second last node
            ListNode* last=secondLast(head);
            if(curr==last)
                break;
            curr->next=last->next;
            last->next=NULL;
            if(curr->next!=NULL)
                curr->next->next=nxt;
            curr=nxt;
        }
    }
};