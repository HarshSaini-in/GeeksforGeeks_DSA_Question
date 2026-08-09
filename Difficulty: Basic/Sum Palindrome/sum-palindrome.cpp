class Solution {
public:

    int Reverse(int n) {
        int ans = 0;

        while (n > 0) {
            int digit = n % 10;
            ans = ans * 10 + digit;
            n = n / 10;
        }

        return ans;
    }

    int isSumPalindrome(int n) {
        int count = 0;
        int t = Reverse(n);
        if(n == t){
            return n;
        }

        while (count < 5) {
            int x = Reverse(n);
            int sum = n + x;

            if (sum == Reverse(sum)) {
                return sum;
            }

            n = sum;
            count++;
        }

        return -1;
    }
};