class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        int start=meetings[0][0];
        vector<vector<int>> newMeetings;
        int end=meetings[0][1];
        for(int i=1;i<meetings.size();i++){
            //merge when
            if(start<=meetings[i][0] && meetings[i][0]<=end){
                end = max(end,meetings[i][1]);
            }
            else{
                newMeetings.push_back({start,end});
                start=meetings[i][0];
                end=meetings[i][1];
            }
        }
        newMeetings.push_back({start,end});
        int count=0;
        unordered_map<int,int> mp;
        for(int i=0;i<newMeetings.size();i++){
            count += (newMeetings[i][1]-newMeetings[i][0])+1;
        }
        return days-count;
    }
};