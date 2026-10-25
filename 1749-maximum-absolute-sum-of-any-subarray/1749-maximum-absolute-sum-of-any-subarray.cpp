class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int max_sum = 0, cur_max = 0;
        int min_sum = 0, cur_min = 0;

        for (int num : nums) {
            cur_max = max(0, cur_max + num);
            max_sum = max(max_sum, cur_max);

            cur_min = min(0, cur_min + num);
            min_sum = min(min_sum, cur_min);
        }

        return max(max_sum, -min_sum);
    }
};