class Solution {
public:
    void maxprofitfinder(vector<int>& prices,int i,int &minprice,int &maxprofit){
        //base case
        if(i==prices.size()) return;
        //one function
        if(prices[i]<minprice) minprice=prices[i];
        int todaysprofit=prices[i]-minprice;
        if(todaysprofit>maxprofit) maxprofit=todaysprofit;
        
        //RE
        maxprofitfinder(prices,i+1,minprice,maxprofit);
    }
    int maxProfit(vector<int>& prices) {
        int minprice=INT_MAX;
        int maxprofit=INT_MIN;
        maxprofitfinder(prices,0,minprice,maxprofit);
        return maxprofit;
    }
};