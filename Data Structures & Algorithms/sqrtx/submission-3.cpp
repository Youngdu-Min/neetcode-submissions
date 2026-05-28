class Solution {
   public:
    int mySqrt(int x) {
        if (x < 2) {
            return x;
        }

        for (int idx = 1; idx < x; idx++) {
            if (x / idx < idx) {
                return idx - 1;
            }
        }
        return -1;
    }
};