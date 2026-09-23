class Solution {
public:
    bool isIsomorphic(string s, string t) {
       map<char, char> mpp;
        map<char, char> mppp;

        for (int i = 0; i < s.length(); i++) {

            // s -> t mapping
            if (mpp.find(s[i]) != mpp.end()) {
                if (mpp[s[i]] != t[i]) {
                    return false;
                }
            }

            // t -> s mapping
            if (mppp.find(t[i]) != mppp.end()) {
                if (mppp[t[i]] != s[i]) {
                    return false;
                }
            }

            mpp[s[i]] = t[i];
            mppp[t[i]] = s[i];
        }

        return true;
    }
};