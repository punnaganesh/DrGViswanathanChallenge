class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odd=1;
        int even=0;
        int oddsum=0;
        int evensum=0;
        while(n>0){
            oddsum+=odd;
            evensum+=even;
            odd+=2;
            even+=2;
            n--;
        }
        return gcd(oddsum, evensum);
        
    }
};