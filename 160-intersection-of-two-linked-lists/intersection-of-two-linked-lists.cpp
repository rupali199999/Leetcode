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
        
        ListNode* pA = headA;
        ListNode* pB = headB;

        // Iterate until pA and pB intersect or reach the end of their lists
        while (pA != pB) {
            // Move pA forward, if it reaches the end of list A, move it to the beginning of list B
            pA = (pA == nullptr) ? headB : pA->next;
            // Move pB forward, if it reaches the end of list B, move it to the beginning of list A
            pB = (pB == nullptr) ? headA : pB->next;
        }

        return pA; // Return either intersection point or nullptr if no intersection
    }
};