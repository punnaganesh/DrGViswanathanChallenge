class Solution {
public:
    int no_of_days(vector<int>& weights,int capacity){
        int required_days=1; int load=0;
        for(int i=0;i<weights.size();i++){
            if(load+weights[i]>capacity){
                required_days+=1;
                load=weights[i];
            }
            else{
                load+=weights[i];
            }

        }
        return required_days;
    } 

    int shipWithinDays(vector<int>& weights, int days) {
        long long  low=*max_element(weights.begin(),weights.end());
        long long  high=accumulate(weights.begin(),weights.end(),0LL);
        int ans=0;
        while(low<=high){
            long long mid= low+(high-low)/2;
            if(no_of_days(weights,mid)<=days){
                    ans=mid;
                    high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
    return ans;
        
    }
};