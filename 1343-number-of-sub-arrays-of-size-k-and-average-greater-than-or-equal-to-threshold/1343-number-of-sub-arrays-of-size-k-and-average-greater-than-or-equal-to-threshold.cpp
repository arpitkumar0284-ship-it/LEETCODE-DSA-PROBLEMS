class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int count=0;
        int window_sum=0;
        for(int i=0;i<k;i++)
        {
            window_sum +=arr[i]; 
        }
        if(window_sum>=k*threshold)
        {
            count++;
        }
        for(int i=k;i<n;i++)
        {
          window_sum += arr[i] - arr[i - k];
           if(window_sum >= k * threshold) {
                count++;
            }  
        }
     return count;
        
    }
};