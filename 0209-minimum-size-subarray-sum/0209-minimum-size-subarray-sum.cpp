class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int minsum = INT_MAX;
        int sum=0;
        for (int right = 0; right < nums.size(); right++) {
            sum+=nums[right];
            while( sum>=target) {
                minsum=min(minsum,right-left+1);
                sum-=nums[left];
                left++;
            
      
    }
}
  return (minsum == INT_MAX) ? 0 : minsum;
    }
};