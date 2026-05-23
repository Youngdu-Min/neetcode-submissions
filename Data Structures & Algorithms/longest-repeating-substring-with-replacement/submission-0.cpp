class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> charSet;
        int l = 0;
        int res = 0;
        int maxLength = 0;

        for(int idx = 0; idx < s.size(); idx++)
        {
            charSet[s[idx]]++;
            maxLength = max(maxLength, charSet[s[idx]]);

            while((idx - l + 1) - maxLength > k)
            {
                charSet[s[l]]--;
                l++;
            }
            res = max(res, idx - l + 1);
        }

        return res;
    }
};
