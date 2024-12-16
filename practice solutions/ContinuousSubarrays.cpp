// Brute force solution **********
// class Solution {
// public:
//     long long continuousSubarrays(vector<int>& nums) {
//         vector<vector<int>> subArr;
//         int n = nums.size();
//         for(int i=0; i<n; i++){
//             for(int j=i; j<n; j++){
//                 vector<int> currArr;
//                 for(int x=i; x<=j; x++){
//                     currArr.push_back(nums[x]);
//                 };
//                 sort(currArr.begin(), currArr.end());
//                 subArr.push_back(currArr);
//             }
//         }
//         long long count = 0;
//         for(int i=0; i<subArr.size(); i++){
//             vector<int> currArr = subArr[i];
//             int max = currArr[currArr.size()-1];
//             int min = currArr[0];
//             if(max - min <= 2) {
//                 count++;
//             }
//         }   
//         return count;
//     }
// };


// optimized solution **********
class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        map<int,int> mp;
        int left,right=0;
        int n=nums.size();
        long long cnt=0;

        while(right<n){
          mp[nums[right]]++;
          // shrinking when max and min diff is greater than 2
          while(mp.rbegin()->first - mp.begin()->first > 2){
            mp[nums[left]]--;
            if(mp[nums[left]]==0){
                mp.erase(nums[left]);
            }
            left++;
          }
          cnt+=right-left+1;
          right++;
        }
        return cnt;       
    }
};
