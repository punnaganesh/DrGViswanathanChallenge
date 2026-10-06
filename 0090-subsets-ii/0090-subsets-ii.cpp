class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        int subsets=1<<n;
          set<vector<int>> ans;
        for(int num=0;num<subsets;num++){
            vector<int> temp;
            for(int i=0;i<n;i++){
                if(num & (1<<i)){
                    temp.push_back(nums[i]);
                }

            }
            sort(temp.begin(), temp.end());
            ans.insert(temp);
        }

        return vector<vector<int>>(ans.begin(), ans.end());
    }
};