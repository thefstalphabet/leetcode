class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector<bool> ans(queries.size());
        vector<int> count(nums.size(), 0);
        for(int i=1; i<nums.size(); i++){
            if (nums[i] % 2 == nums[i - 1] % 2) {
                count[i] = 1 + count[i - 1];
            } else {
                count[i] = count[i - 1];
            }
        };
        for(int i=0; i<queries.size(); i++){
            int start = queries[i][0];
            int end = queries[i][1];        
            ans[i] = (count[end]-count[start])==0;
        }
        return ans;
    }
};
