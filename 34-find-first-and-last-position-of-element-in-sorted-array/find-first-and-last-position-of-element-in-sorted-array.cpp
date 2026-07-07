class Solution {
public:
    int firstOcc(vector<int> &arr ,int n,int k){
        int low = 0;
        int high = n-1;
        int first = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid]==k){
                first = mid;
                high = mid-1;
            }else if(arr[mid]<k){
                low = mid +1;
            }else{
                high = mid - 1 ;
            }
        }
        return first;
    }
    int lastOcc(vector<int> &arr ,int n,int k){
        int low = 0;
        int high = n-1;
        int last = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid]==k){
                last = mid;
                low = mid+1;
            }else if(arr[mid]<k){
                low = mid +1;
            }else{
                high = mid - 1 ;
            }
        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        //time complexity of this is o(n)
        // int first=-1;
        // int last = -1;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==target){
        //         if(first==-1){
        //             first = i;
        //         }
        //         last = i;
        //     }
        // }
        // return {first,last};

        //this is binary approch time complexity is o(nlogn) but not accepted in leetcode
        int first = firstOcc(nums,nums.size(),target);
        if(first == -1){
            return {-1,-1};
        }
        int last = lastOcc(nums,nums.size(),target);
        return {first,last};
    }
};