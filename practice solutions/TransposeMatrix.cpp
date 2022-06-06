class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int colsLen = matrix.size(), rowsLen = matrix[0].size();
        vector<vector<int>> ans(rowsLen, vector<int>(colsLen)); 
        for(int cols=0; cols<colsLen; cols++) { 
            for(int rows=0; rows<rowsLen; rows++) {  
                ans[rows][cols] = matrix[cols][rows];
            }
        }
        return ans;
    }
};