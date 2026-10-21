class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        int n=words.size();
        vector<string> ans;
        for(int i=0;i<n;i++)
        {    string s=words[i];
             string str="";
             int j=0;
              while(j<s.length())
              {
                 if(s[j]!=separator)
                 {
                    str.push_back(s[j]);
                    j++;
                 }
                 else
                 {  if(!str.empty())
                    {
                      ans.push_back(str);
                      str="";
                    }
                      j++;
                 }
              }
              if(!str.empty())
              {
                ans.push_back(str);
              }
        }
        return ans;
    }
};