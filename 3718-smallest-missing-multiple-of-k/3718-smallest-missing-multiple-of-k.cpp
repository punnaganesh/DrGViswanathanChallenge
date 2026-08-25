class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set <int>s;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%k==0){
                s.insert(nums[i]);
            }
        }
        int i=1;
        while(s.find(k*i) != s.end()){
            i++;
        }
        return k*i;
    }
};