class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>pos;
        for(int i=0;i<arr2.size();i++){
            pos[arr2[i]] =i;
        }
        sort(arr1.begin(),arr1.end(), [& pos](int a, int b){
            bool founda= pos.find(a)!=pos.end();
            bool foundb= pos.find(b)!=pos.end();
            if( founda && foundb){
                return pos[a]< pos[b];
            }
            if(founda){
                return true;
            }
            if(foundb){
                return false;
            }
            return a<b;

        });
        return arr1;
        
    }
};