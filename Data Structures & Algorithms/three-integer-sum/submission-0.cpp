class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> input = nums;
        sort(input.begin(), input.end());
        
        for (int start = 0; start < input.size(); start++)
        {
            if(input[start] > 0) break;
            if(start > 0 && input[start] == input[start - 1]) continue;

            int end = input.size() - 1, mid = start + 1;

            while(mid < end)
            {
                int sum = input[start] + input[end] + input[mid];
                if(sum < 0)
                {
                    mid++;
                }
                else if(sum > 0)
                {
                    end--;
                }
                else
                {
                    result.push_back({input[start], input[mid], input[end]});
                    mid++;
                    end--;
                    while(mid < end && input[mid] == input[mid - 1])
                    {
                        mid++;
                    }
                }        
            }
        }
        return result;
           
    }
};
