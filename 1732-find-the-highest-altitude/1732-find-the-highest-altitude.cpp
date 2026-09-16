class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n= gain.size();
        vector<int> highest(n+1,0);
        highest[0]=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            highest[i+1]=gain[i]+highest[i];
            maxi=max(highest[i+1],maxi);
        }
       return maxi; 
    }
};