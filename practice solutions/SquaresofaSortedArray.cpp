class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int x=0; x<nums.size(); x++){
            int p = pow(nums[x], 2);
            nums[x] = p;
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};