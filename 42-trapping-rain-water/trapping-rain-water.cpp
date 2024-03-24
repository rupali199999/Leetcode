class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> pmax(n);
        vector<int> smax(n);
        pmax[0]=height[0];
        smax[n-1]=height[n-1];
        for(int i=1;i<n;i++)
            pmax[i]=max(height[i],pmax[i-1]);
        for(int i=n-2;i>=0;i--)
            smax[i]=max(height[i],smax[i+1]);
        int res=0;
        for(int i=0;i<n;i++)
        {
            res+=(min(pmax[i],smax[i])-height[i]);
        }
        return res;
    }
};