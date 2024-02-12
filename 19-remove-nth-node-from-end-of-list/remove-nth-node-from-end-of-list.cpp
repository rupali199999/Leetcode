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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head ==NULL || head->next==NULL)
            return NULL;
        ListNode* ptr=head;
        int len = 0;
        while(ptr!=NULL)
        {
            len++;
            ptr = ptr->next;
        }
        //first node
        if(len==n)
        {
            ListNode* newhead=head->next;
            delete(head);
            return newhead;
        }
        ptr=head;
        int res=len-n;
        //traversing till one node before node that has to be deleted
        while(ptr!=NULL)
        {
            res--;
            if(res==0)
                break;
            ptr=ptr->next;
        }
        ListNode *delnode=ptr->next;
        ptr->next=ptr->next->next;
        delete(delnode);
        return head;
        
    }
};