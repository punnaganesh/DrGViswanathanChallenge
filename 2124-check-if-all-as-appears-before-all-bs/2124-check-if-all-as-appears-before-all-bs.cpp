class Solution {
public:
    bool checkString(string s) {
        int n=s.size();
        for(int i=0;i<n-1;i++){
            if(s[i]=='b' && s[i+1]!='b'){
                return false;
            }
        }
        return true;
        
    }
};