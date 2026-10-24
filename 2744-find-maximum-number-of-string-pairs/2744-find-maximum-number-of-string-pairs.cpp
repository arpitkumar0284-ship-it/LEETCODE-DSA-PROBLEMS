class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n=words.size();
        unordered_map<string,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[words[i]]++;
        }
        int count=0;
        for(int i=0;i<n;i++)
        {    string temp=words[i];
             reverse(temp.begin(),temp.end());
             if(temp!=words[i] && mp.find(temp)!=mp.end())
             {
                count++;
                mp.erase(temp);
                mp.erase(words[i]);
             }
        }
        return count;
    }
};