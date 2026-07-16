class Solution {
public:
    int thirdMax(vector<int>& nums) {
        //here we can use set apprach but tc is o(nlogn) but sc is o(n) while three variable have tc o(n) and sc o(1)
        long long first = LLONG_MIN;
        long long second = LLONG_MIN;
        long long third = LLONG_MIN;
        for(int num:nums){
            if(num==first || num==second || num==third){
                continue;
            }
            if(num>first){
                third = second;
                second = first;
                first = num;
            }else if(num>second){
                third = second;
                second = num;
            }else if(num>third){
                third = num;
            }
        }
        return (third==LLONG_MIN) ? first : third;
    }
};