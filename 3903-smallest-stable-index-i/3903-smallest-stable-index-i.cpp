class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        int n=nums.size();
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            int mini=INT_MAX;
            int maxi=INT_MIN;
            //maximum
            for(int j=0;j<=i;j++){
                maxi=max(maxi,nums[j]);
            }
            //minimum
            for(int j=i;j<=n-1;j++){
                mini=min(mini,nums[j]);
            }
            int score= maxi-mini;
            if(score<=k){
                 return i;
            }

        }

        return -1;
        
    }
};