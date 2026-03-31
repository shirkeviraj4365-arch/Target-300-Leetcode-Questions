class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
   int totalsum=0;
   int maxsum=nums[0],currMax=0;
   int minsum=nums[0],currMin=0;

   for (int num : nums){
    currMax=max(currMax+num,num);
    maxsum=max(maxsum,currMax);
     currMin=min(currMin+num,num);
    minsum =min(minsum,currMin);
    totalsum+=num;
   }
   return maxsum>0?max(maxsum,totalsum-minsum):maxsum;
}
};
    
    
