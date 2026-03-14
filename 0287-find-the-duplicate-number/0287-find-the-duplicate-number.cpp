class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int left=0;
        int right=nums.size()-1;
        while (left<right){
         
           if (nums[left]==nums[left+1]) {
             return nums[left];
          }if (nums[right]==nums[right-1]){
            return nums[right];
          }
          left++;
          right--;
        }
        return -1;
    }
          
    };