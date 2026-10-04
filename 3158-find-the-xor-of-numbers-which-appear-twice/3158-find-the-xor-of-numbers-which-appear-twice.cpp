class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        vector<int>freq(51,0);
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        int res=0;
        for(int i=1;i<freq.size();i++){
            if(freq[i]==2){
                res^=i;
            }
        }

        return res;
        
    }
};