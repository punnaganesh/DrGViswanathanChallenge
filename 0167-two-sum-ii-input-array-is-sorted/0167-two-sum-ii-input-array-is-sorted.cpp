class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int st=0;
        int end=n-1;
        vector<int> ans;
        int cur_sum=0;
        while(st<end){
            cur_sum=numbers[st]+numbers[end];
            if(cur_sum==target){
                ans.push_back(st+1);
                ans.push_back(end+1);
                return ans;
            }
            else if (cur_sum>target){
                end--;
            }
            else{
                st++;
            }
        }
    return ans; 
    }
};