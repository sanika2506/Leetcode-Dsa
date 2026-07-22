class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        set<int> ans;
        map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mpp[nums[i]]>n/3){
                ans.insert(nums[i]);
            }
        }
        return vector<int>(ans.begin(),ans.end());
    }
};