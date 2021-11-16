class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums;
        int XOR_of_all_ele = 0;
        for(int i=0; i<n; ++i){
            int ele = start + (2 * i);
            nums.push_back(ele);
            XOR_of_all_ele = XOR_of_all_ele ^ ele;
        }
        return XOR_of_all_ele;
    }
};