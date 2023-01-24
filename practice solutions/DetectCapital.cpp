class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        if(isupper(word[0]) && isupper(word[n-1])) {
            for(int i=1; i<n-1; i++) 
                if(!isupper(word[i])) return 0;
        } else if (!isupper(word[0]) && !isupper(word[n-1])) {
            for(int i=1; i<n-1; i++)
                if(isupper(word[i])) return 0;
        } else {
            for(int i=1; i<n; i++)
                if(isupper(word[i])) return 0;
        }
        return 1;
    }
};