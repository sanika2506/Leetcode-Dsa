class Solution {
public:
int fun(vector<int>&arr,int n){
    int noSubarr = 1;
    long long sumarr=0;
    for(int i=0;i<arr.size();i++){
        if(sumarr + arr[i]<=n){
            sumarr +=arr[i];
        }else{
            noSubarr++;
            sumarr=arr[i];
        }
    }
    return noSubarr;
}
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid = (low + high)/2;
            int noArr=fun(nums,mid);
            if(noArr>k){
                low=mid+1;
            }else{
                high = mid -1;
            }
        }
        return low;
    }
};