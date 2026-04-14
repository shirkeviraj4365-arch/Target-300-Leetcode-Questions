class Solution {
public:
    int minOperations(vector<int>& nums) {
         int  operation =0;
     for (int i=1;i<nums.size();i++) {
       
        if (nums[i]<=nums[i-1]) {
            int need=nums[i-1]+1;
            operation+=(need-nums[i]);
            nums[i]=need;
        } 
     } 
     return operation;
    }
};