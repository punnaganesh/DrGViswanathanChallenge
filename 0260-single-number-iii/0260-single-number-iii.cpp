class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xors = 0;

        for(int num : nums) {
            xors ^= num;
        }

        unsigned int uxors = xors;
        unsigned int rightmost = uxors & -uxors;

        int b1 = 0;
        int b2 = 0;

        for(int num : nums) {
            if((unsigned int)num & rightmost) {
                b1 ^= num;
            }
            else {
                b2 ^= num;
            }
        }

        return {b1, b2};
    }
};