class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m=accounts.size();
        int n=accounts[0].size();
        vector<int> wealth;
        for(int i=0;i<m;i++)
        {
            int sum=0;
            for(int j=0;j<n;j++)
            {
                sum+=accounts[i][j];
            }
            wealth.push_back(sum);
        }
        int max=INT_MIN;
        for(int i=0;i<wealth.size();i++)
        {
            if(wealth[i]>max)
            {
                max=wealth[i];
            }
        }
        return max;
    }
};