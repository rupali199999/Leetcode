class Solution {
public:
    int dist(vector<int>& p1)
    {
        return ((p1[0]*p1[0])+(p1[1]*p1[1]));
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> res;
        //max-heap because max distance values r useless
        priority_queue<pair<int,vector<int>>> maxh;
        for(int i=0;i<points.size();i++)
        {
            maxh.push({dist(points[i]),points[i]});
            if(maxh.size()>k)
                maxh.pop();
        }
        while(!maxh.empty())
        {
            res.push_back(maxh.top().second);
            maxh.pop();
        }
        return res;
    }
};