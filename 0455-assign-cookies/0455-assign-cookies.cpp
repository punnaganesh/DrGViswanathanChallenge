class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int child=0;
        int cookie=0;
        int children=0;
        while(child<g.size() && cookie< s.size()){
            if(g[child]<=s[cookie]){
                children++;
                cookie++;
                child++;
            }
           else{
            cookie++;
           }
            
        }
        return children;

        
    }
};