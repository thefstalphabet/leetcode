class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());
        for(int i=0; i<n; i++){
            if(nums == sorted) {
                return true;
            }
            rotate(nums.begin(), nums.begin() + 1, nums.end());
        }
        return false;
    }
};
