class Solution {
public:
    int sumofDays(vector<int> &arr ,int div){
        int sum = 0;
        for(int i=0;i<arr.size();i++){
            sum = sum + (arr[i]+div-1)/div;
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = INT_MIN;
        for(int i=0;i<nums.size();i++){
            high = max(nums[i],high);
        }
        while(low<=high){
            int mid = (low + high)/2;
            if(sumofDays(nums,mid) <=threshold){
                high= mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};