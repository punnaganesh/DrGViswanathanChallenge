class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        vector<int>ans;
        int repeat=n;
        int no_of_ones=0;
        while(repeat>0){
            for(int i=0;i<n && repeat>0;i++){
                if(__builtin_popcount(arr[i])==no_of_ones){
                    ans.push_back(arr[i]);
                    repeat--;
                }
            }
            no_of_ones++;

        }
        return ans;
        
    }
};