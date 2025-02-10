class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i]) && !st.empty()){
                st.pop();
            }
            else if(!isdigit(s[i]))
                st.push(s[i]);
        }
        string s1="";
        while(!st.empty()){
            s1+=st.top();
            st.pop();
        }
        reverse(s1.begin(),s1.end());
        return s1;
    }
};