class Solution {
public:
    bool solve(int n, int rem) {
        if(n<rem) return false;

        return !solve(n-rem,rem-1);
    }

    bool canAliceWin(int n) {
        return solve(n, 10);
    }
};
