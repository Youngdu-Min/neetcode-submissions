class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string mergeWord;
        int minLength;
        bool word1Big;

        if(word1.length() > word2.length())
        {
            minLength = word2.length();
            word1Big = true;
        }
        else
        {
            minLength = word1.length();
            word1Big = false;
        }

        for(int idx = 0; idx < minLength; idx++)
        {
            mergeWord += word1.at(idx);
            mergeWord += word2.at(idx);
        }

        mergeWord = word1Big ? mergeWord += word1.substr(minLength, word1.length()) : mergeWord += word2.substr(minLength, word2.length());

        return mergeWord;
    }
};