class Solution {
public:
    int convertM(string time){
        int hours=stoi(time.substr(0,2));
        int min=stoi(time.substr(3,2));
        return 60*hours+min;
        //Total minutes=hours*60+minutes
    }
    int findMinDifference(vector<string>& timePoints) {
        vector<int> mins;
        for(auto time: timePoints){
            mins.push_back(convertM(time));
        }
        sort(mins.begin(),mins.end());
        int ans=INT_MAX;
        for(int i=0;i<mins.size()-1;++i){
            int diff=mins[i+1]-mins[i];
            ans=min(ans,diff);
        }
        //Handle the circular difference
        int cird=1440-mins.back()+mins.front();
        ans=min(ans,cird);
        return ans;

    }
};