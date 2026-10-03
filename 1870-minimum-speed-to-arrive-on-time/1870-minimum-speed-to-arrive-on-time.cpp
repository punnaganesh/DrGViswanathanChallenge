class Solution {
public:
    double find_hours(vector<int> &dist, int speed){
        double total_hours=0;
        for(int i=0;i<dist.size()-1;i++){
            total_hours+=ceil(double(dist[i])/double(speed));
        }
        total_hours+=double(dist[dist.size()-1])/speed;
        return total_hours;
    }


    int minSpeedOnTime(vector<int>& dist, double hour) {
        int low=1;
        int high=10000000;
         int ans =-1;
        while(low<=high){
            int mid= low+(high-low)/2;
            double hours= find_hours(dist,mid);
            if(hours<=hour){
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