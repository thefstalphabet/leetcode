class Solution {
public:
    long long findScore(vector<int>& nums) {
        vector<pair<int, int>> copy;
        for(int i=0; i<nums.size(); i++){
            copy.push_back({nums[i], i});
        }
        sort(copy.begin(), copy.end());

        long long ans = 0;
        for(int i=0; i<copy.size(); i++){
            int smallest = copy[i].first;
            int index = copy[i].second;
            // when the ele is already marked
            if(nums[index]<0) continue;
            // storign the choosed element
            ans += nums[index];
            // marking current choosed element
            nums[index] = -nums[index];
            // marking its left one
            if(index-1 >= 0 && nums[index-1] > 0){
                nums[index-1] = -nums[index-1];
            }
            // amrkign its right one
            if(index+1 < nums.size() && nums[index+1] > 0){
                nums[index+1] = -nums[index+1];
            }
        }
        return ans;
    }
};
