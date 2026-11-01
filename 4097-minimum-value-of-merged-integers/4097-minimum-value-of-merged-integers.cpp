class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
         int ans = INT_MAX;
        int n=nums.size();
         for(int i=0;i<n;i+=2)
         {
              string s1 = to_string(nums[i]);
              string s2 = to_string(nums[i + 1]);

              string s = s1 + s2;

            int num = stoi(s);

            if(num < ans) {
                ans = num;
            }
         }
        return ans;
    }
};