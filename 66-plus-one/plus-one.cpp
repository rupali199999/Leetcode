class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        reverse(digits.begin(),digits.end());
        int carry=1,i=0;
        while(carry==1)
        {
            if(i<n)
            {
                if(digits[i]==9)
                    digits[i]=0;
                else
                {
                    digits[i]+=1;
                    carry=0;
                }
            }
            else
            {
                digits.push_back(1);
                carry=0;
            }
            i++;
        }
        reverse(digits.begin(),digits.end());
        return digits;
    }
};