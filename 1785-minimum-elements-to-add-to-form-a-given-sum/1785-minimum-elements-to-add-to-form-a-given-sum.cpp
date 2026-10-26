class Solution {
public:
    int minElements(vector<int>& nums, int limit, int goal) {
        int n=nums.size();
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        long long diff=abs(sum-goal);
         if(diff==0) {
            return 0;
        }
        else {
            if(diff%limit==0) {
                return diff/limit;
            }
            else {
                return (diff/limit) + 1;
            }
        }
    }
};