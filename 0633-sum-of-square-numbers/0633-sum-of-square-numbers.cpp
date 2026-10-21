class Solution {
public:
    bool judgeSquareSum(int c) {
        long long  a = 0;
        long long  b = sqrt(c);

        while (a <= b) {

            long long  val = a * a + b * b;
            if (val == c) {
                return true;
            } else if (val > c) {
                b--;
            } else {
                a++;
            }
        }
        return false;
    }
};