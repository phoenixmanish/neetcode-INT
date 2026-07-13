class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0 ;
        int n = prices.size();
        int i = 0;
        int j = 1;
        while(j < n){
            if(prices[j] > prices[i]){
            int diff = prices[j]- prices[i];
            
            res = max(res ,diff);
            }
            else {
                i =j;
                }

           j++;

        }
        return res;
    }
};
