class Solution {
public:
    bool isDigit(char c){
        if(c=='0' || c=='1' || c=='2' || c=='3' || c=='4' || c=='5' || c=='6' || c=='7' || c=='8' || c=='9')
            return true;

        return false;
    }
    string clearDigits(string s) {
        string s1="";
        int n=s.size();
        for(int i=0;i<n;i++){
            if(isDigit(s[i])){
                int j=i-1;
                while(j>=0 && isDigit(s[j])){
                    j--;
                }
                s[j]='0';
            }
        }
        for(int i=0;i<n;i++)
        {
            if(!isDigit(s[i]))
                s1+=s[i];
        }
        return s1;
    }
};