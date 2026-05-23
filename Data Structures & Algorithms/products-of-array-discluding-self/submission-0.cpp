class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int numSize = nums.size();
        vector<int> prefix;
        vector<int> suffix;
        vector<int> result;

        int numLeft = 1;
        for(int idx = 0; idx < numSize; idx++)
        {
            cout << "prefix " << numLeft << endl;
            prefix.push_back(numLeft);
            numLeft *= nums[idx];
        }

        numLeft = 1;
        for(int idx = numSize; idx > 0; idx--)
        {
            cout << "suffix " << numLeft << endl;
            suffix.push_back(numLeft);
            numLeft *= nums[idx - 1];
        }

        for(int idx = 0; idx < numSize; idx++)
        {
            result.push_back(prefix[idx] * suffix[numSize - 1 - idx]);
        }
        return result;
    }
};
