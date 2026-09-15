class Solution {
public: 
//we can do using recursion but its time taking 

    // int ways(int n){
    //     if(n==1){
    //         return 1;
    //     }else if(n==2){
    //         return 2;
    //     }
    //     else{
    //         return ways(n-1)+ways(n-2);
    //     }
    // }
    int climbStairs(int n) {
        int prev1 = 1;
        int prev2 = 2;
        if(n==1){
            return 1;
        }else if(n==2){
            return 2;
        }else{
            int current;
            for(int i = 3;i<=n;i++){
                current = prev1 + prev2;
                prev1 = prev2;
                prev2 = current;
            }
            return current;
        }
    }
};