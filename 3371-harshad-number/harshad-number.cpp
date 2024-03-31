class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=0;
        int y=x;
        if(x>=1 && x<=9)
            return x;
        else if(x>=10 && x<=99)
        {
            sum+=x%10;
            sum+=x/10;
        }
        else
            return 1;
        if(sum!=0 && x%sum==0)
            return sum;
        return -1;
    }
};