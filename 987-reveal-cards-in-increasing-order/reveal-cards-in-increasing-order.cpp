class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        int n=deck.size();
        vector<int> res(n,0);
        bool skip=false;
        int i=0;//deck
        int j=0;//res
        while(i<n)
        {
            if(res[j]==0) //space khali hai
            {
                if(skip==false)
                {
                    res[j]=deck[i];
                    i++;
                }
                skip = !skip;
            }
            j=(j+1)%n;
        }
        return res;
    }
};