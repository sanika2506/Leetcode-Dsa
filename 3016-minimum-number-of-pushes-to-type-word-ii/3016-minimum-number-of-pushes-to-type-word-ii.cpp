class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        vector<int> charCount(26,0);
        for(char c:word){
            charCount[c - 'a']++;
        }
        sort(charCount.rbegin(),charCount.rend());
        int pushCount=0;
        for(int i=0;i<26;i++){
            pushCount += charCount[i]*(i/8+1);
        }
        return pushCount;
    }
};