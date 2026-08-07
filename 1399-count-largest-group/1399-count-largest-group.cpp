class Solution {
public:
    // Function to calculate sum of digits
    int digitSum(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

    int countLargestGroup(int n) {
        unordered_map<int, int> mp;

        // Count numbers in each digit-sum group
        for (int i = 1; i <= n; i++) {
            mp[digitSum(i)]++;
        }

        int maxi = 0;

        // Find the largest group size
        for (auto &it : mp) {
            maxi = max(maxi, it.second);
        }

        int ans = 0;

        // Count how many groups have the largest size
        for (auto &it : mp) {
            if (it.second == maxi)
                ans++;
        }

        return ans;
    }
};