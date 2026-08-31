class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int min_idx=0;
        int max_idx=0;
       for(int i = 1; i < n; i++) {
            if(nums[i] < nums[min_idx]) {
                min_idx = i;
            }

            if(nums[i] > nums[max_idx]) {
                max_idx = i;
            }
        }
        if(min_idx>max_idx){
            swap(min_idx,max_idx);
        }
        int bothleft=max_idx+1;
        int bothright=n-min_idx;
        int leftright=(min_idx+1)+(n-max_idx);
        int rightleft=(n-min_idx)+(max_idx+1);
        return min({bothleft,bothright,leftright,rightleft});

    }
};