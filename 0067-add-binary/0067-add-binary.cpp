class Solution {
public:
    string addBinary(string a, string b) {
        string c;
        int carry=0;
        int i = a.length()-1;
        int j = b.length()-1;
        while(i>=0 || j>=0 || carry>0){
            int digitA = 0;
            int digitB = 0;
            if(i >= 0)
                digitA = a[i] - '0';
            if(j >= 0)
                digitB = b[j] - '0';

            int sum = digitA + digitB + carry;
            carry = sum/2;
            sum = sum%2;
            c += (sum+'0');
            i--;
            j--;
            }
        reverse(c.begin(),c.end());
        return c;
    }
};