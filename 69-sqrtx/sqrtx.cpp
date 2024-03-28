class Solution {
public:
    int mySqrt(int x) {
        if(x<=1)
            return x;
        long long l=0, r = x;
        long m;
        while(l<=r){
            m=l+(r-l)/2;
            long long sqr=m*m;
            if(sqr==x)
                return m;
            else if(sqr < x)
                l=m+1;
            else
                r=m-1;
        }
        return r;
    }
};