// using extra space
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int len = nums.size();
        vector<int> ans(len);
        for(int i=0;i<len;i++){
            ans[i] = nums[nums[i]];
        } return ans;
    }
};

// without using extra space
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int len = nums.size();
        for(int i=0;i<len;i++){
            nums.push_back(nums[nums[i]]);
        } 
        nums.erase(nums.begin(), nums.begin()+len);
        return nums;
    }
};