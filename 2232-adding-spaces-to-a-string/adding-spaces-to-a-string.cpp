class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string res="";
        int i=0,j=0;
        int n=spaces.size();
        while(i<s.size()){
            if(j<n && i==spaces[j])
            {
                res+=" ";
                j++;
            }
            res+=s[i];
            i++;
        }
        return res;
    }
};