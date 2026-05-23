#include <unordered_set>
#include <iostream>

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mapS;
        unordered_map<char, int> mapT;

        if(s.length() != t.length())
            return false;

        for(int idx = 0; idx < s.length(); idx++)
        {
            mapS[s[idx]]++;
            mapT[t[idx]]++;
        }

        if(mapS.size() != mapT.size())
            return false;

        for (auto const& [key, count] : mapS) { 
            if (mapT[key] != count) 
            return false;
        }
        return true;
    }
};
