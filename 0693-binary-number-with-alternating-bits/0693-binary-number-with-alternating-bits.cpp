class Solution {
public:
    bool hasAlternatingBits(int n) {
        bool ans = true;
        int num = n;
        for (int i = 0; i < 31  && (num >> i) > 0; i++) {
           

            int bit1 = (num >> i) & 1;
            int bit2 = (num >> (i + 1)) & 1;

            if (bit1 == bit2) {
                return false;
            }
        }
        return ans;
    }
};