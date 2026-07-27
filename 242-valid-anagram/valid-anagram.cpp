class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char ,int> m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        map<char ,int> n;
        for(int i=0;i<t.size();i++){
            n[t[i]]++;
        }
        if(m==n){
            return true;
        }
        return false;
    }
};