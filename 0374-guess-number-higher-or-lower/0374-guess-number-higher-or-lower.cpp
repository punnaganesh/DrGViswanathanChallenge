/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int low=1;
        int high=n;
        while(low<=high){
            int num=low+(high-low)/2;
            int result=guess(num);
            if(result==-1){
                high=num-1;
            }
            else if(result==1){
                low=num+1;
            }
            else{
                return num;
            }
        }
        return -1;
    }
};