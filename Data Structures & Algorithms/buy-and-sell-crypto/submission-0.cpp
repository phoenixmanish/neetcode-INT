class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0 ;
        int n = prices.size();
        for(int i = 0 ; i<n ; i++){
            for(int j = i ; j < n ; j++){
                int diff = prices[j]-prices[i];
                res = max(res , diff );
            }
        }
        return res;
    }
};
