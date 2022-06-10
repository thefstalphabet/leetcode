// Brute force apparoach
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         vector<int> ans(2);
//         for(int i=0; i<numbers.size(); i++) {
//             for(int j=i+1; j<numbers.size(); j++) {
//                 if(numbers[i]+numbers[j] == target) {
//                     ans[0] = i+1;
//                     ans[1] = j+1;
//                     return ans;
//                 }
//             }
//         }
//         return ans;
//     }
// };

// two pinter apparoach
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         vector<int> ans(2);
//         int i = 0, j = i + 1;
//         while(i<numbers.size()) {
//             if(numbers[i]+numbers[j] == target){
//                 ans[0] = i+1;
//                 ans[1] = j+1;
//                 break;
//             }
//             if(j == numbers.size()-1) {
//                 i++;
//                 j = i + 1;
//             }
//             j++;
//         }
//         return ans;
//     }
// };

// optimized apporoach
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans(2);
        int i = 0, j = numbers.size()-1;
        while(i<j) {
            if (numbers[i]+numbers[j]==target) {
                ans[0] = i+1;
                ans[1] = j+1;
                break;
            }
            if(numbers[i]+numbers[j]>target) j--;
            else i++;
        }
        return ans;
    }
};