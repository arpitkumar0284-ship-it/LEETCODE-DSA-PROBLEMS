class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {
        int n = nums.size();
        int present= 0;
        map<pair<int,int>, int> mp;
        for(int i=0;i<n-1;i++) {
            if(nums[i]==nums[i + 1]) {
                present++;
            }
            else {
                mp[{nums[i], nums[i + 1]}]++;
            }
        }
        int maxi = 0;
        for(auto x : mp) {
            int a = x.first.first;
            int b = x.first.second;
            int cnt = mp[{a,b}] + mp[{b,a}];
            maxi = max(maxi, cnt);
        }
        return present + maxi;
    }
};