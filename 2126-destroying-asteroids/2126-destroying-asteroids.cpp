class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        int n=asteroids.size();
        sort(asteroids.begin(),asteroids.end());
        bool flag=true;
        long long temp=mass;
        for(int i=0;i<n;i++)
        {   
            if(temp>=asteroids[i])
            {
               temp+=asteroids[i];
            }
            else
            {
                flag=false;
                break;
            }
        }
        return flag;
    }
};