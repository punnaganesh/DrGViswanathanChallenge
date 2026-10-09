class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        int left=0;
        int right=n-1;
        int idx=n-1;
        while(left<=right){
            if(nums[left]*nums[left] >= nums[right]*nums[right]){
                ans[idx]=nums[left]* nums[left];
                idx--;
                left++;
            }
            else{
                ans[idx]= nums[right]*nums[right];
                idx--;
                right--;
            }
        }
        return ans;
        
    }
};