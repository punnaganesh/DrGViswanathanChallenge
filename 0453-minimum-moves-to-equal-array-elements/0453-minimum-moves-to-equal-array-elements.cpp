class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini=*min_element(nums.begin(), nums.end());
        int min_moves=0;
        for(int i=0;i<nums.size();i++){
            min_moves+=nums[i]-mini;
        }
        return min_moves;
        
    }
};