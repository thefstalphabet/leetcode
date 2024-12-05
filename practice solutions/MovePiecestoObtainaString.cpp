class Solution {
public:
    bool canChange(string start, string target) {
        int i = 0;
        int j = 0;
        int n = start.length();
        while(i<n || j<n){
            //skip all blanks in start
            while(i<n && start[i]=='_') i++;
            //skip all blanks in target
            while(j<n && target[j]=='_') j++;

            //count is same if the same string end at the same time
            if(i==n || j==n){
                return (i==n && j==n);
            }

            //checkign false scenarios
            if(start[i]!=target[j] ||
            (start[i]=='L' && j>i) ||
            (start[i]=='R' && j<i)            
            ) {
                return false;
            }
            i++;
            j++;
        }
        return true;
    }
};
