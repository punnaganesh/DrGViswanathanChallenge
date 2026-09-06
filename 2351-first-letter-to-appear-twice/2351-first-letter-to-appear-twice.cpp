class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char>seen;
        for(int i=0;i<s.length();i++){
            if(seen.find(s[i])==seen.end()){
                seen.insert(s[i]);
            }
            else{
                return s[i];
            }
        }

        return ' ';
    }
};