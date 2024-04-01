class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.size()-1;
        while(s[i]==' ')
        {
            i--;
            if(isalpha(s[i]))
                break;
        }
        int len=0;
        while(i>=0 && s[i]!=' ')
        {
            len++;
            i--;
        }
        return len;

    }
};