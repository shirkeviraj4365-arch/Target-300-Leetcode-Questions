class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end()); 
        int longest=0;
        for (int x :st) {
            if(st.count(x-1)==0) {
                int len =1;
                while (st.count(x+1)) {
                    x++;
                    len++;
                }
                longest = max (longest,len);
            } }
            return longest;

        }
};