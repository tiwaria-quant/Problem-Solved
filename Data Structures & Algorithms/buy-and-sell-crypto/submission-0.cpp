class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int buy = prices[0];
        for(int i = 0;i<prices.size();i++){
            if(prices[i]>buy){
                int profit = prices[i]-buy;
                ans = max(ans,profit);
            }
            else{
                buy = prices[i];
            }
            
        }
        return ans;
    }
};
