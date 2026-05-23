class Solution {
public:
    bool checkIsAlphanumeric(char c) {
    return (c >= 'a' && c <= 'z') || 
           (c >= 'A' && c <= 'Z') || 
           (c >= '0' && c <= '9'); 
    }

    bool checkSame(char charA, char charB)
    {
        if (isdigit(charA) || isdigit(charB)) return charA == charB;
        return charA == charB || charA + 32 == charB || charA == charB + 32;
    }

    bool isPalindrome(string s) {
        int startIdx = 0;
        int endIdx = s.size() - 1;

        while(startIdx < endIdx)
        {
            while(startIdx < endIdx && !checkIsAlphanumeric(s[startIdx]))
                startIdx++;
            while(startIdx < endIdx && !checkIsAlphanumeric(s[endIdx]))
                endIdx--;

            if(startIdx >= endIdx)
                break;

            cout << "start " << s[startIdx] << ", " << "end " << s[endIdx] << endl;

            if(!checkSame(s[startIdx], s[endIdx]))
                return false;

            startIdx++;
            endIdx--;
        }

        return true;
    }
};
