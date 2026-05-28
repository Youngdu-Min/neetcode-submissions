class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int elementLength = 0;
        vector<int> removedNums = {};
        for(int idx = 0; idx < nums.size(); idx++)
        {
            if(nums[idx] != val)
            {
                elementLength++;
                removedNums.push_back(nums[idx]);
            }
        }
        nums = removedNums;
        return elementLength;
    }
};