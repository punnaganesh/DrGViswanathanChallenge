
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        deque<int> dq;
        vector<int> ans;

        for (int right = 0; right < n; right++) {

            // Remove indices outside the window
            while (!dq.empty() && dq.front() <= right - k) {
                dq.pop_front();
            }

            // Remove elements smaller than current element
            while (!dq.empty() && nums[dq.back()] <= nums[right]) {
                dq.pop_back();
            }

            // Store the current index
            dq.push_back(right);

            // Add maximum after the first window is formed
            if (right >= k - 1) {
                ans.push_back(nums[dq.front()]);
            }
        }

        return ans;
    }
};
