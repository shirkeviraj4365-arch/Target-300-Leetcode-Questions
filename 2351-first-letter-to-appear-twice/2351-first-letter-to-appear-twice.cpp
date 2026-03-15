class Solution {
public:
    char repeatedCharacter(string s) {
        int fre[26]={0};
        for (char c : s) {
            fre[c-'a']++;
            if ( fre[c-'a']==2) {
                return c;
            }
        }
        return ' ';
    }
};