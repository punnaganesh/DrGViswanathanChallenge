class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(n * 2, 0);
       int left=0;
       int right=n;
       int index=0;
       while(index<2*n){
        ans[index]=nums[left];
        ans[index+1]=nums[right];
        left++;
        right++;
        index+=2;
       }
      
        return ans;
    }
};