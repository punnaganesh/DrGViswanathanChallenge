class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        int median = nums[n / 2];

        long long  mini_moves = 0;
        for (int i = 0; i < nums.size(); i++) {
            mini_moves += abs(nums[i] - median);
        }
        return mini_moves;
    }
};