class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int ans=0;
        
        int n=nums.size();
        int subsets=1<<n;
        for(int num=0;num<subsets;num++){
            
            int xors=0;
            for(int bit=0;bit<n;bit++){
                if(num & (1<<bit)){
                    xors^=nums[bit];
                }
            }
            
            ans+=xors;

        }
        return ans;

    }
};