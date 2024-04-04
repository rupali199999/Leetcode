class Solution {
public:
    int maxDepth(string s) {
        int leftbracket=0,rightbracket=0;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                leftbracket++;
            else if(s[i]==')')
                rightbracket++;
            int vps=leftbracket-rightbracket;
            if(vps>ans)
            {
                ans=vps;
            }
        }
        return ans;
    }
};