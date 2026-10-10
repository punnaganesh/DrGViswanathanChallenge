class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freq;

        // Count the frequency of each number
        for (int n : nums) {
            freq[n]++;
        }

        // Sort using the comparator
        sort(nums.begin(), nums.end(), [&freq](int a, int b) {
            if (freq[a] == freq[b]) {
                return a > b;  // Higher number comes first
            }
            return freq[a] < freq[b];  // Lower frequency comes first
        });

        return nums;
    }
};