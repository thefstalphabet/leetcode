class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result;
        for(int index=0; index<=n; index++){
            int all_ones = 0;
            int num = index;
            while(num>0){
                all_ones += num%2;
                num = num/2;
            }
            result.push_back(all_ones);
        }
        return result;
    }
};