class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.size()==1){
            return s;
        }
        int freq[26]={0};
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
        }
        string left="";
        for(int i=0;i<26;i++){
            for(int j=0;j<freq[i]/2;j++){
                left += char('a'+i);
            }
        }
        string middle="";
        for(int i=0;i<26;i++){
            if(freq[i]%2!=0){
                middle = char('a' + i);
            }
        }
        string right = left;
        reverse(right.begin(), right.end());
        string result = left+middle+right;
        return result;
    }
};