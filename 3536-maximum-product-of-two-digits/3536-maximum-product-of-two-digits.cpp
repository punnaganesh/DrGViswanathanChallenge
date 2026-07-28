class Solution {
public:
    int maxProduct(int n) {
        int fir_max=0;
        int sec_max=0;
        while(n>0){
        int digit=n%10;
        if(digit >=fir_max){
            sec_max=fir_max;
            fir_max=digit;
        }
        else if(digit>sec_max){
            sec_max= digit;
        }
        n=n/10;
        }
        return  fir_max*sec_max;
    }
    
};