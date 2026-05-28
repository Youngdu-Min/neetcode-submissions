class Solution {
   public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        int shortestLength = 99999;
        for (int idx = 1; idx < strs.size(); idx++) {
            if(shortestLength > strs[idx].length())
            {
                shortestLength = strs[idx].length();
            }
        }

        prefix = prefix.substr(0, shortestLength);

        for (int firstIdx = 0; firstIdx < prefix.length(); firstIdx++) {
            for (int idx = 1; idx < strs.size(); idx++) {
                if (strs[0].at(firstIdx) != strs[idx].at(firstIdx)) {
                    return prefix.substr(0, firstIdx);
                }
            }
        }

        return prefix;
    }
};