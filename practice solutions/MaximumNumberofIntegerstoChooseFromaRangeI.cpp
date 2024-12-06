class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int intCount = 0, intSum = 0;
        for(int i=1; i<=n; i++) {
            auto it = find(banned.begin(), banned.end(), i);
            if(it == banned.end()){ // not present
                if(intSum+i <= maxSum) {
                    intCount += 1;
                    intSum +=i;
                }
            }
        }
        return intCount;
    }
};
