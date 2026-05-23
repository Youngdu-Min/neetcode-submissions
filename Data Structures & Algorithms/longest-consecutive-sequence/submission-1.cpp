class Solution {
public:
    vector<int> leftNums;

    int getLongest(int num)
    {
        int length = 0;
        while(find(leftNums.begin(), leftNums.end(), num) != leftNums.end())
        {
            leftNums.erase(std::remove(leftNums.begin(), leftNums.end(), num), leftNums.end());
            num++;
            length++;
        }
        return length;
    }

    int longestConsecutive(vector<int>& nums) {
        leftNums = nums;
        int currLength = 1;
        int longestLength = 1;
        int idx = 0;

        if(leftNums.size() == 0)
        {
            return 0;
        }

        while(leftNums.size() != 0)
        {
            int num = leftNums[idx];
            if(find(leftNums.begin(), leftNums.end(), num - 1) == leftNums.end())
            {
                idx = 0;
                currLength = getLongest(num);
                if(currLength > longestLength)
                {
                    longestLength = currLength;
                }
            }
            else
            {
                idx++;
            }


        }

        return longestLength;
    }
};
