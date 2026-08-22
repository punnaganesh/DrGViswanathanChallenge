class Solution {
public:
    bool checkDivisibility(int n) {
        int summer=n;
        int proder=n;
        int sum=0;
        int prod=1;
        while(summer>0){
            int last_digit=summer%10;
                sum+=last_digit;
                summer=summer/10;
        }
        while(proder>0){
            int last_digit=proder%10;
            prod=prod*last_digit;
            proder=proder/10;
        }
        if(n%(sum+prod)==0){
            return true;
        }
        return false; 
    }
};