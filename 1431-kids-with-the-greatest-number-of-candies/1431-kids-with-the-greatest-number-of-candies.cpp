class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> result(n);
        int maxi =candies[0];
        for(int i =1;i<n;i++){
            maxi = max(candies[i],maxi);
        }
        for(int i=0;i<n;i++){
            result[i]=false;
            if(extraCandies + candies[i]>=maxi){
                result[i]=true;
            }
        }
        return result;
    }
};