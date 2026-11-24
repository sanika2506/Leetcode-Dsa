class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int n = size(nums);
        for (int i=0;i<n;i++){
            int total = 0;
            for(int j = 0;j<=i;j++){
                total += nums[j];
            }
            ans.push_back(total);
        }
        return ans;
    }
};