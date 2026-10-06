class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        vector<int>ans;
        vector<int> pre_sum(n+1,0);
        
        for(int i=1;i<pre_sum.size();i++){
            pre_sum[i]=pre_sum[i-1]^arr[i-1];
        }
        for(int i=0;i<queries.size();i++){
            int xors=pre_sum[queries[i][1]+1] ^ pre_sum[queries[i][0]];
            ans.push_back(xors);

        }


        return ans;
    }
};