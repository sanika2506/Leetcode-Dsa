class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // int n1 = nums1.size();
        // int n2 = nums2.size();
        // set<int>ans;
        // for(int i=0;i<n1;i++){
        //     for(int j=0;j<n2;j++){
        //         if(nums1[i]==nums2[j]){
        //             ans.insert(nums1[i]);
        //         }
        //     }
        // }
        // return vector<int>(ans.begin(), ans.end());

        //better approach is we can use unordered_set to do this problem
        int n1 = nums1.size();
        int n2 = nums2.size();
        // set<int>ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>ans;
        int i=0,j=0;
        while(i<n1 && j<n2){
            if(nums1[i]<nums2[j]){
                i++;
            }else if(nums1[i]>nums2[j]){
                j++;
            }else{
                if (ans.empty() || ans.back() != nums1[i]) {
                    ans.push_back(nums1[i]);
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};