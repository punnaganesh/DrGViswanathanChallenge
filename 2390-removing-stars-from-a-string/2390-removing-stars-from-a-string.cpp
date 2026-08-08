class Solution {
public:
    string removeStars(string s) {
        string word= "";
        for(int i=0;i<s.length();i++){
            if (s[i]!='*'){
                word+=s[i];
            }
            else{
                word.pop_back();
            }
        }
        return word;
    }
};