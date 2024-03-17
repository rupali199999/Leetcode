class Solution {
public:
    bool isPalindrome(string str)
    {
        int left=0,right=str.size()-1;
        while(left<right)
        {
            if(str[left]!=str[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
    int countSubstrings(string s) {
        int res=0;
        for(int i=0;i<s.size();i++)
        {
            string str="";
            str+=s[i];
            for(int j=i+1;j<s.size();j++)
            {
                str+=s[j];
                if(isPalindrome(str))
                    res++;
            }
        }
        return res+s.size();
    }
};