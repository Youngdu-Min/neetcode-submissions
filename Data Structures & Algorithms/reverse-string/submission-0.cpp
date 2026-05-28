class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> reverseS;
        for(int idx = s.size() - 1; idx >= 0; idx--)
        {
            reverseS.push_back(s[idx]);
        }

        s = reverseS;
    }
};