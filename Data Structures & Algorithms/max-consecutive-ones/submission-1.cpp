class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxLength = 0, currLength = 0;

        for(int idx = 0; idx < nums.size(); idx++)
        {
            currLength = nums[idx] == 0 ? 0 : ++currLength;

            cout << currLength << endl;

            if(maxLength < currLength)
            {
                maxLength = currLength;
            }
        }

        return maxLength;
    }
};