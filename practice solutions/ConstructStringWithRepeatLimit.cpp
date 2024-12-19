class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        vector<int> freq(26, 0);
        for(int i=0; i<s.size(); i++) {
            freq[s[i] - 'a']++;
        }
        string str = "";
        int index = 25;
        while(index >= 0){
            // when char is not present in the string
            if(freq[index] == 0) {
                index--;
                continue;
            }
            // when present using it repeatLimit times
            int charUseCount = min(freq[index], repeatLimit);
            for(int i=0; i<charUseCount; i++){
                str+=('a'+index);
            }
            // then dec its used frequency
            freq[index] -= charUseCount;

            // if current char frequency is not 0 after decresing it
            // finding its lower char and using it once
            if(freq[index] > 0) {
                int prevIndex = index-1;
                while(prevIndex >= 0 && freq[prevIndex] == 0) {
                    prevIndex--;
                }
                if(prevIndex < 0) {
                    break;
                }
                str+=('a'+prevIndex);
                freq[prevIndex]--;
            }
        }
        return str;
    }
};
