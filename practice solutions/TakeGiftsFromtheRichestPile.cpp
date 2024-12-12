class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<long long> pq;
        long long maxi;
        for(int gift: gifts){
            pq.push(gift);
        }
        while(k--){
            maxi = sqrt(pq.top());
            pq.pop();
            pq.push(maxi);
        }
        long long sum = 0;
        while (!pq.empty()) {
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};
