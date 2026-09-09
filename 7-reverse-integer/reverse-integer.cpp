class Solution {
public:
    int reverse(int x) {
        // int sign = 1;
        // if(x<0){
        //     sign = -1;
        // }
        // int rev = 0;
        // x=abs(x);
        // while(x>0){
        //     int digit = x%10;
        //     rev = rev*10+ digit;
        //     x=x/10;
        //      if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && digit > 7)) return 0;
        //     if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && digit < -8)) return 0;
        // }
        // return sign*(rev);


        int rev = 0;
        while(x!=0){
            int rem = x%10;
            if(rev > INT_MAX / 10 || 
            (rev == INT_MAX / 10 && rem > 7)){
            return 0;
        }

            if(rev < INT_MIN / 10 || 
            (rev == INT_MIN / 10 && rem < -8)){
            return 0;
        }
            rev = rev * 10 + rem;
            x = x/10;
        }
        return rev;
    }
};