class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> squared;
        for(int x : nums){
            squared.push_back((long long)x*x);
        }
        sort(squared.begin(),squared.end());
        bool sign = true;
        long long ans = 0;
        int left = 0;
        int right = squared.size() - 1;
        while(left<=right){
            if(sign){
                ans += squared[right];
                right--;
            }else{
                ans -= squared[left];
                left++;
            }
            sign = !sign;
        }
        return ans;
    }
};