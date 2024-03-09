/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == nullptr || headB == nullptr) {
            return nullptr; // If any list is empty, there can't be an intersection
        }
        ListNode* p2=headB;
        while(p2!=nullptr)
        {
            ListNode* p1=headA;
            while(p1!=nullptr)
            {
                if(p1==p2)
                    return p2;
                p1=p1->next;
            }
            p2=p2->next;
        }
        return nullptr;
    }
};