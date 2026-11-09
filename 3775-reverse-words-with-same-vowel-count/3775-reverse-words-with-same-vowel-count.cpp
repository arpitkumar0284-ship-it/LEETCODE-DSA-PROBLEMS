
class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word, ans;
        int cnt = 0;

        ss >> word;

        for(char ch : word) {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                cnt++;
        }

        ans = word;

        while(ss >> word) {
            int c = 0;

            for(char ch : word) {
                if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                    c++;
            }

            if(c == cnt)
                reverse(word.begin(), word.end());

            ans += " " + word;
        }

        return ans;
    }
};
