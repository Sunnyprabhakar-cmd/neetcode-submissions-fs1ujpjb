class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int slow=0;
        int best=0;
        for(int fast=0;fast<prices.size();fast++){
            if(prices[fast]-prices[slow]<0){
                slow=fast;
            }
            else{
                if(slow!=prices.size()-1){
                best=max(best,prices[fast]-prices[slow]);
                }
                else{
                    return 0;
                }
            }
        }
        return best;
    }
};
