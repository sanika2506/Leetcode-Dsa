class Solution {
public:
    int arrangeCoins(int n) {
        int row = 1;
        for(int i = 1;i<=n;i++){
            n = n-row;
            row++;
        }
        return row-1;
    }
};