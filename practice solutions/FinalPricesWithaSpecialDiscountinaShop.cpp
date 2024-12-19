class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> ans;
        for(int i=0; i<n; i++){
            bool discount = false;
            for(int j=i+1; j<n; j++){
                if(prices[j] <= prices[i]){
                    ans.push_back(prices[i]-prices[j]);
                    discount = true;
                    break;
                }
            }
            if(!discount) {
                ans.push_back(prices[i]);
            }
        }
        return ans;
    }
};
