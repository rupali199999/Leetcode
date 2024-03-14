class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int totalApples=0;
        for(int i:apple)
            totalApples+=i;
        sort(capacity.begin(),capacity.end());
        int count=0;
        for(int i=capacity.size()-1;i>=0;i--)
        {
            if(totalApples<=0)
                break;
            else
            {
                totalApples-=capacity[i];
                count++;
            }
        }
        return count;
    }
};