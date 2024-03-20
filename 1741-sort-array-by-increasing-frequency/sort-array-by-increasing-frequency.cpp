
class myComparator{
public:
   int operator()(pair<int,int>&p1,pair<int,int>&p2){
       if(p1.first>p2.first)  return true;
       else if(p1.first<p2.first)  return false;
       else{
           if(p1.second<p2.second)  return true;
           else return false;
        
       }
   }
};
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int> res;
        unordered_map<int,int> mp;
        for(int n:nums)
            mp[n]++;
        //min heap- because i will push all values and at end pop min freq first
        priority_queue<pair<int,int>,vector<pair<int,int>>,myComparator> pq;
        for(auto& entry:mp)
            pq.push({entry.second,entry.first});
        while(!pq.empty())
        {
            for(int i=0;i<pq.top().first;i++)
                res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};