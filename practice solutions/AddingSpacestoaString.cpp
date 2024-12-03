class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans;
        int spaceIdx = 0;
        for(int i = 0; i<s.size(); i++){
            int currChar = s[i];
            if(spaceIdx<spaces.size() && i == spaces[spaceIdx]){
                ans+=" ";
                spaceIdx++;
            }
            ans+=currChar;
        }
        return ans;
    }
};
