class Solution {
public:
    int minOperations(vector<string>& logs) {
        int level=0;
        for(auto log:logs){
            if(log=="../")
            {
                if(level>0)
                    level--;
                else
                    level=0;
            }
            else if(log!="./"){
                level++;
            }
        }
        return level;
    }
};