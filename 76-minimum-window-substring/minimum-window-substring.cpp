class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> mp;
        int i=0,j=0;
        for(char c:t)
            mp[c]++;
        int count= mp.size();
        int start=0,res=INT_MAX;
        while(j<s.size())
        {
            if(mp.find(s[j])!=mp.end())
            {
                mp[s[j]]--;
                if(mp[s[j]]==0)
                    count--;
            }
            if(count==0)
            {
                while(count==0)
                {
                    if(res > j-i+1)
                    {
                        start=i;
                        res=j-i+1;
                    }
                    if(mp.find(s[i])!=mp.end())
                    {
                        mp[s[i]]++;
                        if(mp[s[i]]>0)
                            count++;
                    }
                    i++;      
                }
            }
            j++;
        }
        return res==INT_MAX ? "" : s.substr(start,res);
    }
};