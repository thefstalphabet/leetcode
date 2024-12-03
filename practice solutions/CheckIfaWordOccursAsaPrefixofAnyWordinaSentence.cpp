class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        sentence+=" ";
        vector<string> words;
        int ans = -1; // if not match is found will return -1
        string temp;
        for(int i = 0; i<sentence.size(); i++){
            if(sentence[i] != ' '){
                temp+=sentence[i];
            } else {
                words.push_back(temp);
                temp = "";
            }
        };

        for(int i = 0; i<words.size(); i++){
            if(words[i].substr(0, searchWord.size()) == searchWord) {
                ans = i+1;
                break;
            }
        }

        return ans;
    }
};
