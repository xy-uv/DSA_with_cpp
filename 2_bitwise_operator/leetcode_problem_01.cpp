class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod = 1;
        int sum = 0;
        while (n != 0) {
            int num = n % 10;
            prod *= num;
            sum += num;
            n /= 10;
        }
        int ans = prod - sum;
        return ans;
    }
};