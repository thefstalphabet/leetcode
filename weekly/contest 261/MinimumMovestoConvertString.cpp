class Solution {
public:
    int minimumMoves(string s) {
        int n = s.size();
        int count = 0;
        for(int i=0; i<n; i++){
            if(s[i]=='X'){
                for(int j=i; j<=2; j++){
                    s[j] = 'O';
                }
                count++;
                i+=2;
            }
            else continue;
        }
        return count;
    }
};