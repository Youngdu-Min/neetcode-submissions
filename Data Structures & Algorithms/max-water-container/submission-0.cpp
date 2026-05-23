class Solution {
public:
    int maxArea(vector<int>& heights) {
        int start = 0, end = heights.size() - 1;
        int maxValue = 0;
        
        while(start < end)
        {
            int currValue = (end - start) * min(heights[start], heights[end]);

            if(maxValue < currValue)
            {
                maxValue = currValue; 
            }

            if(heights[start] > heights[end])
            {
                end--;
            }
            else
            {
                start++;
            }
        }

        return maxValue;


    }
};
