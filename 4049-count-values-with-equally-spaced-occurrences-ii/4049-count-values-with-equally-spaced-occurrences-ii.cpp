class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int , vector<int>>mp;
        for(int i=0;i<nums.size(); i++){
            mp[nums[i]].push_back(i);
        }
        int count=0;
        for(auto it : mp){
            vector<int> indices=it.second;
            if(indices.size()>=3){
            int m=indices.size();
            bool valid_num=true;
            int diff=indices[1]-indices[0];
                for(int i=0;i<m-1;i++){
                    if(indices[i+1]-indices[i]!=diff){
                        valid_num=false;
                        break;
                    }
                }
                if(valid_num){
                    count++;
                }
                
            }
        }
        return count;
    }
};