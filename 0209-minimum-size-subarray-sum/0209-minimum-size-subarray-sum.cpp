class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int right = 0;
        int ans = INT_MAX;
        int sum = 0;
        while(right<nums.size()){
            sum +=nums[right];
            while(sum>=target){
                int length = right - left + 1;
                ans = min(ans, length);
                sum-=nums[left];
                left++;
            }
            right++;
        }
        if(ans == INT_MAX){
            return 0;
        }
        return ans;
    }
};