class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1)
            return true;
        long long l=0,h=num;
        while(l<h)
        {
            long long m=(l+h)>>1;
            if(m*m == num)
                return true;
            else if(m*m < num)
                l=m+1;
            else
                h=m;
        }
        return false;
    }
};