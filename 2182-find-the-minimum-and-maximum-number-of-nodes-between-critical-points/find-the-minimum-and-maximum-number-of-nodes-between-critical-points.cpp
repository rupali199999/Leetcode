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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* temp = head->next;
        vector<int> res(2,-1);
        if(temp->next == nullptr)
            return res;
        vector<int> v;
        int prev = head->val;
        int dist=1;
        while(temp->next!=nullptr){
            if( (prev < temp->val && temp->val > temp->next->val) || (prev > temp->val && temp->val < temp->next->val)){
                v.push_back(dist);
            }
            prev = temp->val;
            dist++;
            temp=temp->next; 
        }
        if(v.size()<2)
            return res;
        int n = v.size();
        int minval = INT_MAX;
        for(int i=1;i<n;i++)
        {
            minval = min(minval, v[i]-v[i-1]);
        }
        res[0] = minval;
        res[1] = v[n-1]-v[0];
        return res;
    }
    
};