class Solution {
public:
    static bool myfunction(vector<int>& a, vector<int>& b){
        return a[1] > b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        // sorting the array as per the units
        sort(boxTypes.begin(), boxTypes.end(), myfunction);
        int totalUnits = 0; 
        for(auto ele: boxTypes) {
            if(truckSize < ele[0]) {
                return totalUnits += truckSize * ele[1];
            }
            totalUnits += ele[0] * ele[1];
            truckSize -= ele[0];
        }
        
        return totalUnits;
    }
};