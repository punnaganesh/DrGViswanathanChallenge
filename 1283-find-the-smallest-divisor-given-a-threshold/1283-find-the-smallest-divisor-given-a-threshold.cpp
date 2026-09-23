class Solution {
public:
    long long  sum(vector<int>& nums, int d){
        long long  nums_sum=0;
        for(int i=0;i<nums.size();i++){
            nums_sum+=ceil((double) nums[i]/(double) d);
        }
        return nums_sum;
    }


    int smallestDivisor(vector<int>& nums, int threshold) {
        long long low=1;
       long long  high=*max_element(nums.begin(),nums.end());
        int ans=-1;
        while(low<=high){
            long long  mid=low+(high-low)/2;
            if(sum(nums,mid)<=threshold){
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