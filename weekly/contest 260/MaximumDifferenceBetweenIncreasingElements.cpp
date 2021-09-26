class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size(); // size of nums array
        // init ans as -1, when we won't find the max diff then we return -1
        int sum = -1; 
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]<nums[j]){
                    if(nums[j]-nums[i]>sum){
                        sum = nums[j]-nums[i];
                    }
                }
            }
        }
        return sum;
    }
};