class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> clearedNums;
        int lastNum = -999999;

        for(int idx = 0; idx < nums.size(); idx++)
        {
            cout << lastNum << " " << nums[idx] << endl;
            if(lastNum == nums[idx])
                continue;
            clearedNums.push_back(nums[idx]);
            lastNum = nums[idx];
        }

        nums = clearedNums;
        return clearedNums.size();
    }
};