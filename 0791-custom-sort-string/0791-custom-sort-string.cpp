
class Solution {
public:
    vector<int> indices_order(string &order) {
        vector<int> indices(26, 100);

        for (int i = 0; i < order.size(); i++) {
            indices[order[i] - 'a'] = i;
        }

        return indices;
    }

    string customSortString(string order, string s) {
        vector<int> indices = indices_order(order);

        sort(s.begin(), s.end(), [&indices](char a, char b) {
            return indices[a - 'a'] < indices[b - 'a'];
        });

        return s;
    }
};
