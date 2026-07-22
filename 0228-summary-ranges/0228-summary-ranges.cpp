class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        vector<string> arr;
        int i=0;
        while(i<n){
            int start = nums[i];
            while(i+1<n && nums[i+1]==nums[i]+1){
                i++;
            }
            int end = nums[i];
            if(start==end){
                arr.push_back(to_string(start));
            }else{
                arr.push_back(to_string(start)+"->"+to_string(end));//to_string converts an int to string
            }
            i++;
        }
        return arr;
    }
};