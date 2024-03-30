class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        list<int> li;
        int i=0,j=0;
        while(j<nums.size()){
            //calculations
            while(!li.empty() && li.back()<nums[j])
                li.pop_back();
            
            li.push_back(nums[j]);

            //ans and sliding window
            if(j-i+1 == k)
            {
                res.push_back(li.front());
                if(!li.empty() && li.front()==nums[i])
                    li.pop_front();
                i++;
            }

            //if len(window)<k
            j++;

        }
        return res;
    }
};