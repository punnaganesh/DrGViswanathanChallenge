class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int sum=0;
        int mini=INT_MAX;
        bool flag= false;
        for(int right=0;right<nums.size(); right++){
            sum+=nums[right];
            while(sum>=target){
                mini=min(mini,right-left+1);
                flag=true;
                sum-=nums[left];
                left++;
            }
           
        }
        if(flag== false){
            return 0;
        }
        return mini;
       
        
    }
};