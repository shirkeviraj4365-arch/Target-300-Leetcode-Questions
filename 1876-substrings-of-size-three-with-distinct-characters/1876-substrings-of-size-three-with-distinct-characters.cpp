class Solution {
public:
    int countGoodSubstrings(string s) {
        vector<int> freq(256, 0);
        int left = 0;
        int count = 0;
        for (int right = 0; right < s.length(); right++) {
            freq[s[right]]++;

            if (right - left + 1 > 3) {
                freq[s[left]]--;
                left++;
            }
            if (right - left + 1 == 3) {
                if (freq[s[left]]==1 && freq[s[left+1]] == 1 && freq[s[left+2]] == 1) {
                    count++;
                }
            }
        }
        return count;
    }
};