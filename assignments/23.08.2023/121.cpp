class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int mini=prices[0];
        for(int i=1;i<prices.size();i++){
           int curr=prices[i]-mini;
           maxprofit=max(maxprofit,curr);
           mini=min(prices[i],mini);
        
    }
    return maxprofit;
    }
};