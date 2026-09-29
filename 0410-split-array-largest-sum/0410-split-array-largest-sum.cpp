class Solution {
public:
    bool can_fit(vector<int>& nums, int limit, int k) {
        int sub_arr = 1;
        int sum = 0;
        for (int num : nums) {
            if (sum + num > limit) {
                sub_arr++;
                sum = num;
            } else {
                sum += num;
            }
        }
        return sub_arr <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = INT_MIN;
        int high = 0;
        for (int num : nums) {
            low = max(low, num);
            high+= num;
        }
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (can_fit(nums, mid, k)) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};