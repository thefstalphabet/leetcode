class Solution {
public:
    void reverseString(vector<char>& s) {
        int x = 0;
        int z = s.size()-1;
        while(x<z){
            char temp = s[x];
            s[x] = s[z];
            s[z] = temp;
            x++, z--;
        }
        
        // Improved apporoch
        for(int i=0; i<s.size()/2; ++i){    
            swap(s[i], s[s.size()-i-1])
        }
    }
};