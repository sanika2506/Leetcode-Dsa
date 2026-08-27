class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans, right(n, INT_MIN);

        for (int i = n - 2; i >= 0; i--)
            right[i] = max(right[i + 1], nums[i + 1]);

        int left = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (nums[i] > left || nums[i] > right[i])
                ans.push_back(nums[i]);

            left = max(left, nums[i]);
        }

        return ans;
    }
};