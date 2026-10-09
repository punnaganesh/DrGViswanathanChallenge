class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int n = words.size();
        int j = 0;
        for (int i = 0; i < n; i++) {
            for (int k = 0; k < words[i].size(); k++) {
                if (j >= s.size() || s[j] != words[i][k]) {
                    return false;
                }
                j++;
            }
            if (j == s.size()) {
                return true;
            }
        }

        return false;
    }
};