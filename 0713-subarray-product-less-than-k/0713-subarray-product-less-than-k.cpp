class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count = 0;
        if(k<1){
            return 0;
        }
        long long product = 1;
        int left = 0;
        for(int i =0;i<nums.size();i++){
            product *= nums[i];
            while(product >= k && left<=i){
                product /= nums[left];
                left++;
            }
            count += (i - left + 1);
        }
        return count;
    }
};
 