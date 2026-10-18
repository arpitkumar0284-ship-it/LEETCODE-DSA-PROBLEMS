class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
      for (int i = 0; i < n; i++) {
          for (int j = i; j < n; j++) {
            vector<int> temp;
            for (int k = i; k <= j; k++) {
                temp.push_back(nums[k]);
            }
            ans.push_back(temp);
        }
    }
    vector<int> sizes;
    set<int> st;
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            st.insert(ans[i][j]);
        }

        sizes.push_back(st.size()*st.size());
        st.clear();
    }
    int final_sum=0;
    for(int i=0;i<sizes.size();i++)
    {
        final_sum+=sizes[i];
    }
    return final_sum;

    }
};