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
    ListNode* mergeNodes(ListNode* head) {
        if(head == nullptr)
            return head;
        ListNode* newNodes = new ListNode(0);
        ListNode* newTemp = newNodes;
        ListNode* temp=head->next;
        int sum=0;
        while(temp!=nullptr){
            if(temp->val!=0){
                sum += temp->val;
            }
            else{
                newTemp->next = new ListNode(sum);
                newTemp=newTemp->next;
                sum=0;
            }
            temp = temp->next;
        }
        return newNodes->next;
    }
};