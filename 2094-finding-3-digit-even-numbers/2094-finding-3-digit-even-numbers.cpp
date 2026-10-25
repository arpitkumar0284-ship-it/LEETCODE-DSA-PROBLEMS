
class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int n = digits.size();
        vector<int> ans;
        unordered_map<int, int> mp;

        for(int i = 0; i < n; i++) {
            mp[digits[i]]++;
        }

        for(int i = 100; i <= 999; i += 2) {
            int x = i;

            int a = x % 10;
            x /= 10;

            int b = x % 10;
            x /= 10;

            int c = x;

            if(mp.find(a) != mp.end() && mp[a] > 0) {
                mp[a]--;

                if(mp.find(b) != mp.end() && mp[b] > 0) {
                    mp[b]--;

                    if(mp.find(c) != mp.end() && mp[c] > 0) {
                        ans.push_back(i);
                    }

                    mp[b]++;
                }

                mp[a]++;
            }
        }

        return ans;
    }
};
