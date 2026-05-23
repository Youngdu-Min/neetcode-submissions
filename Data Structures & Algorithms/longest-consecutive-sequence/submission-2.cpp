class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longestLength = 0;

        for(int num : numSet)
        {
            int currValue;
            int currLength;
            if(numSet.find(num - 1) == numSet.end())
            {
                currValue = num;
                currLength = 1;
                while(numSet.find(currValue + 1) != numSet.end())
                {
                    currValue++;
                    currLength++;
                }
                
                longestLength = max(currLength, longestLength);
            }
        }
        return longestLength;
    }
};
