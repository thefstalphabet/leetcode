class Solution {
public:
    int mostWordsFound(vector<string>& nums) {
        int maxi = 0, words = 0;
        for(auto ele: nums){
            for(auto ch: ele) if(ch == ' ') words++;
            maxi = max(maxi, words);
            words = 0;
        }
        // +1 for the last word in a sentence
        return maxi+1;
    }
};