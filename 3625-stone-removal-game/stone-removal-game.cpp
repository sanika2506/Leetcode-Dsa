class Solution {
public:
    bool canAliceWin(int n) {
        int count = 1;
        int x = 10;
        while(n>=x){
            n = n - x;
            count++;
            x--;
        }
        if(count%2==0){
            return true;
        }else{
            return false;
        }
    }
};