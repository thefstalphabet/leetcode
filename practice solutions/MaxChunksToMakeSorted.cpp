class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size();
        int maxi = -1;
        int chunks = 0;
        for(int i=0; i<n; i++){
            maxi = max(maxi, arr[i]);
            if(maxi < i+1){
                chunks++;
            }
        }
        return chunks;
    }
};
