class Solution {
public:
    void sortColors(vector<int>& nums) {
        priority_queue <int, vector<int>, greater<int>> pq;
        for(auto ele: nums) pq.push(ele);
        nums.clear();
        while(!pq.empty()){
            nums.push_back(pq.top());
            pq.pop();
        }
    }
};