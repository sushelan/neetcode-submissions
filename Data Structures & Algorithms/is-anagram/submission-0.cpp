#include <map>

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        map<char,int> mS;
        map<char,int> mT;

        for (char c : s) {

            if (!mS.contains(c)) {
                mS[c] = 1;
            }
            else {
                mS[c]++;
            }
        }
        for (char c : t) {

            if (!mT.contains(c)) {
                mT[c] = 1;
            }
            else {
                mT[c]++;
            }
        }
        return mS == mT;
    }
};
