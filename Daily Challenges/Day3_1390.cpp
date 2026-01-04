class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int total = 0;

        for (int x : nums) {
            int cnt = 0;
            int sum = 0;

            for (int d = 1; d * d <= x; d++) {
                if (x % d == 0) {
                    cnt++;
                    sum += d;

                    if (d != x / d) {
                        cnt++;
                        sum += x / d;
                    }
                }

                if (cnt > 4) break;  // 🔥 early stop
            }

            if (cnt == 4) {
                total += sum;
            }
        }
        return total;
    }
};
