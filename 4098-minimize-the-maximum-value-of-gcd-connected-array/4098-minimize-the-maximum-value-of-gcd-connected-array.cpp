
class Solution {
public:
    long long minimumMaxValue(int n, int index, int value) {

        if(value == 1) return -1;

        int diff = 2;

        if(value % 2 != 0) {
            for(int i = 3; i * i <= value; i += 2) {
                if(value % i == 0) {
                    diff = i;
                    break;
                }
            }

            if(diff == 2) {
                diff = value;
            }
        }

        long long left = index;
        long long right = n - index - 1;

        long long first = value;

        if(left > 0) {
            first = value - diff - 2 * (left - 1);

            if(first <= 0) return -1;
        }

        long long ans = value;

        if(right > 0) {
            ans = value + diff + 2 * (right - 1);
        }

        return ans;
    }
};
