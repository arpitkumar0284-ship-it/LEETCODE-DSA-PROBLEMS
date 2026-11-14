class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {

        int sumA = 0, sumB = 0;

        for(int i = 0; i < aliceSizes.size(); i++)
            sumA += aliceSizes[i];

        for(int i = 0; i < bobSizes.size(); i++)
            sumB += bobSizes[i];

        int diff = (sumA - sumB) / 2;

        unordered_set<int> st;

        for(int i = 0; i < bobSizes.size(); i++)
            st.insert(bobSizes[i]);

        for(int i = 0; i < aliceSizes.size(); i++) {
            int x = aliceSizes[i];
            int y = x - diff;

            if(st.find(y) != st.end())
                return {x, y};
        }

        return {};
    }
};