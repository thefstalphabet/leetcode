class Solution {
public:
    static bool compare(vector<int> &a, vector<int> &b){
        return a[1]<b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size() == 0) return 0;

        // first we need to sort that 2D array
        sort(points.begin(), points.end(), compare);

        int arrowCount = 1;
        int last = points[0][1];
        for(int i=1; i<points.size(); i++){
            if(points[i][0] > last) {
                arrowCount++;
                last = points[i][1];
            }
        }

        return arrowCount;
    }
};