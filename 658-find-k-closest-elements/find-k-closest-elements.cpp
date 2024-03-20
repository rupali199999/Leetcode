class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> res;
        priority_queue<pair<int, int>> pq;
        for(int i=0;i<arr.size();i++)
        {
            pq.push(make_pair( abs(arr[i]-x) , arr[i]));
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        while(!pq.empty())
        {
            res.push_back(pq.top().second);
            pq.pop();
        }
        sort(res.begin(),res.end());
        return res;
    }
};