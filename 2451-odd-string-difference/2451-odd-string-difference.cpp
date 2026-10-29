class Solution {
public:
    string oddString(vector<string>& words) {
        int n = words.size();
        vector<int> a, b, c;

        for (int j = 1; j < words[0].size(); j++)
            a.push_back(words[0][j] - words[0][j-1]);

        for (int j = 1; j < words[1].size(); j++)
            b.push_back(words[1][j] - words[1][j-1]);

        for (int j = 1; j < words[2].size(); j++)
            c.push_back(words[2][j] - words[2][j-1]);

        if (a == b) {
            for (int i = 2; i < n; i++) {
                vector<int> v;
                for (int j = 1; j < words[i].size(); j++)
                    v.push_back(words[i][j] - words[i][j-1]);

                if (v != a) return words[i];
            }
        }

        if (a == c) return words[1];
        if (b == c) return words[0];

        return words[2];
    }
};