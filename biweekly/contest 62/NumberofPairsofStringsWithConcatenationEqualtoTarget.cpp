class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int n = nums.size();
        int ans = 0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                string s1 = nums[i]+nums[j];
                if(s1==target){
                    ans++;
                }
                string s2 = nums[j]+nums[i];
                if(s2==target){
                    ans++;
                }
            }
        }
        return ans;
    }
};