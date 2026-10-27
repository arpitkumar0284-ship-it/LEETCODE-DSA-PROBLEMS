
class Solution {
public:
    int rev(int n)
    {
        int r=0;
        while(n>0)
        {
            r*=10;
            r+=(n%10);
            n/=10;
        }
        return r;
    }

    int countNicePairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        int count=0;
        int mod=1e9+7;

        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]-rev(nums[i])]++;
        }

        for(int i=0;i<nums.size();i++)
        {
            int x=nums[i]-rev(nums[i]);

            mp[x]--;

            count=(count+mp[x])%mod;

            if(mp[x]==0)
                mp.erase(x);
        }

        return count;
    }
};
