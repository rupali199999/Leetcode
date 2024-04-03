class Solution {
public:
      long long calcTime(vector<int>& piles, int hourly) {
        long long time = 0; // Change to long long
        for (int i = 0; i < piles.size(); i++)
            time += (piles[i] + hourly - 1) / hourly; 
        return time; // Convert back to int before returning
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxval=INT_MIN;
        for(int i=0;i<piles.size();i++)
            maxval=max(maxval,piles[i]);
        int l=1,r=maxval;
        while(l<=r)
        {
            int m=l+(r-l)/2;
            long long reqTime=calcTime(piles,m);
            if(reqTime<=h)
            {
                r=m-1;
            }
            else 
                l=m+1;
            
        }
        return l;
    }
};