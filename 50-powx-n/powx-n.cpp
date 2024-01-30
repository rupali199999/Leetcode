class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        long nn=n;
        if(n<0)
            nn=nn*-1;
        while(nn>0)
        {
            if(nn%2==0)
            {
                x*=x;
                nn/=2;
            }
            else
            {
                ans*=x;
                nn-=1;
            }
        }
        if(n<0)
            return (double)(1.0)/(double)ans;
        return ans;
    }
};