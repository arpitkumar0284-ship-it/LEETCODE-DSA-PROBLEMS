class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long score=0;
        int n=nums.size();
        vector<int> pos;
        for(int i=0;i<nums.size();i++)
        {
            pos.push_back(abs(nums[i]));
        }
        sort(pos.begin(),pos.end());
        int i=0;
        int j=n-1;
        while(i<=j)
        { 
                 if(i!=j)
                 {
                      score+=(pos[j]*pos[j])-(pos[i]*pos[i]);
                      i++;
                      j--;
                 }
                else
                {
                     score+=pos[i]*pos[i];
                     i++;
                }
        }
        return score;
    }
};