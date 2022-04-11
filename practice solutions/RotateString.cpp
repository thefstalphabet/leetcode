/*
Apporoch 1
The apporoch is the remove last chat and add it to the front of the s string
and compare it with goal string, if they gets similar we simply returns true
*/
// class Solution {
// public:
//     bool rotateString(string s, string goal) {
//         int len = s.length();
//         char temp;
//         while(len--) {
//             temp = s[s.size()-1];
//             s.erase(s.size()-1, 1);
//             s.insert(s.begin(), temp);
//             if(s==goal) return 1;
//         }
//         return 0;
//     }
// };

/*
Apporoch 2
*/
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return 0;
        s += s;
        if(s.find(goal) != string::npos) return 1;
        return 0;
    }
};