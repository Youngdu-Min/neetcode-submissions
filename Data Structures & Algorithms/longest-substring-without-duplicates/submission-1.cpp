class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int l = 0;
        int res = 0;
        for(int idx = 0; idx < s.size(); idx++)
        {
            while(seen.count(s[idx]))
            {
                seen.erase(s[l]);
                l++;
            }
            seen.insert(s[idx]);
            res = max(res, idx - l + 1);    
        }

        return res;
    }
};
