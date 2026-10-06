class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int ans = 0;
        int freq[256] = {0};
        int maxLen = 0;

        while(right < s.length())
        {
            while(freq[s[right]]>0){
                freq[s[left]]--;
                left++;
            }
            freq[s[right]]++;
            int len = right-left+1;
            maxLen = max(len,maxLen);
            right++;
        }
        return maxLen;
    }
};