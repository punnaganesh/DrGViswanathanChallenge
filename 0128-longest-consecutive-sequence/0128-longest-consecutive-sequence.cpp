class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int cur;
        int count=0;
        int longest=0;
        for(int num: s){
            if(s.find(num-1)==s.end()){
                cur=num;
                count=1;
                while(s.find(cur+1)!= s.end() ){
                    cur=cur+1;
                    count++;
                }
                longest=max(longest,count);

            }
        }
        return longest;
        
    }
};