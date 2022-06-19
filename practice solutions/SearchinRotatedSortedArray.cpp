// linear apparoach
// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         auto present = find(nums.begin(), nums.end(), target);
//         if(present != nums.end()) {
//             for(int i=0; i<nums.size(); i++) {
//                 if(nums[i]==target) {
//                     return i;
//                 }
//             }
//         }
//         return -1;
//     }
// 

// binary search tree apparoach
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1, mid;
        while(low<=high) {
            mid = low + high >> 1;
            if(target==nums[mid]) return mid;
            // checking left array items that are sorted or not
            if(nums[low]<=nums[mid]) {
                if(target>=nums[low] && target<=nums[mid]) {
                    high = mid - 1;   
                } else {
                    low = mid + 1;
                }
            // checking right array items that are sorted or not
            } else {
                if(target>=nums[mid] && target<=nums[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;   
                }
            }
        }
        return -1;
    }
};