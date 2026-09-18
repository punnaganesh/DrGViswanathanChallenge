class Solution {
public:
    long long  calculate_hours(vector<int>& piles, int hourly) {
        long long total_hours = 0;
        for (int i = 0; i < piles.size(); i++) {
            total_hours += ceil((double) piles[i] / (double) hourly);
        }
        return total_hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        while (low <= high) {
            int mid = low + ((high - low) / 2);
            long long total_hours = calculate_hours(piles, mid);
            if (total_hours <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};