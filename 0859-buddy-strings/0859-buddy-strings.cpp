class Solution {
public:
    bool buddyStrings(string s, string goal) {

        if (s.length() != goal.length()) {
            return false;
        }

        vector<int> diff;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != goal[i]) {
                diff.push_back(i);
            }
        }

        // Case 1: Exactly two positions are different
        if (diff.size() == 2) {
            int i = diff[0];
            int j = diff[1];

            return s[i] == goal[j] && 
                   s[j] == goal[i];
        }

        // Case 2: Strings are already equal
        if (diff.size() == 0) {

            vector<int> freq(26, 0);

            for (char c : s) {
                freq[c - 'a']++;

                if (freq[c - 'a'] >= 2) {
                    return true;
                }
            }

            return false;
        }

        // One difference or more than two differences
        return false;
    }
};