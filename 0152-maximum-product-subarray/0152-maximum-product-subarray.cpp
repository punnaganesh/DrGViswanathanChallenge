class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pref=1;
        int suf=1;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
             if(pref == 0){
            pref=1;
            }
            if(suf == 0){
            suf=1;
        }
        pref=pref*nums[i];
        suf=suf*nums[nums.size()-i-1];
        maxi = max(maxi,max(pref,suf));
        }

    return maxi;
    }
};