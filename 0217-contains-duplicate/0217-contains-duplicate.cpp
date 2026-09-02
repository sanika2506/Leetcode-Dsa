class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // using hashing approach 

        // map<int,int> mpp;
        // for(int i=0;i<nums.size();i++){
        //     mpp[nums[i]]++;
        // }
        // for(auto it : mpp){
        //     if(it.second>1){
        //         return true;
        //     }
        // }
        // return false;

        //using unordered set optimal approach
        unordered_set<int> st;
        for(int x : nums){
            if(st.find(x)!=st.end()){
                return true;
            }
            st.insert(x);
        }
        return false;
    }
};