class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size()==1)
            return stones[0];
        //I am choosing max heap for taking max 2 stones
        priority_queue<int> pq;
        for(int s:stones)
            pq.push(s);
        while(pq.size()>=2)
        {
            int y=pq.top();
            pq.pop();
            int x=pq.top();
            pq.pop();
            if(x!=y)
                pq.push(y-x);
        }
        return pq.size() ? pq.top() : 0;

    }
};