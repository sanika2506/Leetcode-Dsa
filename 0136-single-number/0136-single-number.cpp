class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //bruteforce solution
        // for(int i=0;i<nums.size();i++){
        //     int count =0;
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]==nums[j]){
        //             count++;
        //         }
        //         else count =0;
        //     }
        // }
        //optima solution using hashing
        int maxi = 0;
        // for(int i=0;i<nums.size();i++){
        //     maxi = max(nums[i],maxi);
        // }
        // vector<int> hash(maxi+1,0);
        // for(int i=0;i<nums.size();i++){
        //     hash[nums[i]]++;
        // }
        // for(int i = 0;i<nums.size();i++){
        // if(hash[nums[i]] == 1){
        //     return nums[i];
        //     break;
        // }
        // }
        // return -1;
        //we can also perform using unordered map
        
        //more better with XOR
        int ans = 0;

        for(int x : nums){
            ans ^= x;
        }

        return ans;
    }
};