class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int minimum = INT_MAX;
        int maximum = INT_MIN;
        int sum = 0;
        for(int i =0;i<nums.size();i++){
            minimum = min(nums[i],minimum);
            maximum = max(nums[i],maximum);
        }
        unordered_set<int> st;

        for (int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }

        vector<int> ans;

        for (int i = minimum + 1; i < maximum; i++) {
            if (st.find(i) == st.end()) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};