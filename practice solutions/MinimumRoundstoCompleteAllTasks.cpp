class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int, int> mp;
        for(auto ele: tasks) mp[ele]++;

        int count = 0;
        for(auto pr: mp){
            int acc = pr.second;

            if(acc == 1) return -1;
            if(acc % 3 == 0) {
                count += acc/3;
            } else if (acc % 3 == 2) {
                count += acc/3;
                count++;
            } else {
                count += acc/3;
                count++;
            }
        }
        return count;
    }
};