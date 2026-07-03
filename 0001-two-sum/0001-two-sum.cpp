class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int n = nums.size();
        // vector<int> v;
        // for(int i=0;i<n;i++){
        //     for(int j =i+1;j<n;j++){
        //         if(nums[i]+nums[j]==target){
        //             v.push_back(i);
        //             v.push_back(j);
        //             break;
        //         }
        //     }
        // }
        // return v;

        //optimal solution
        unordered_map<int, int> m;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int num = nums[i];
            int more  = target - num;
            if(m.find(more)!=m.end()){
                return {m[more],i};
            }
            m[num]=i;
        }
        return {-1,1};
    }
};