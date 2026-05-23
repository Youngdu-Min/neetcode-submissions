class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxArea = 0;
        stack<pair<int, int>> st; 

        for(int i = 0; i < heights.size(); i++)
        {
            int start = i;
            while(!st.empty() && st.top().second > heights[i])
            {
                pair<int, int> top = st.top();
                st.pop();

                int height = top.second;
                int index = top.first;
                int currArea = height * (i - index);
                cout << currArea << endl;

                maxArea = max(maxArea, currArea);
                start = index;
            }
            st.push({start, heights[i]});
        }

        while(!st.empty())
        {
            int width = heights.size() - st.top().first;
            int currArea = st.top().second * width;
            cout << currArea << endl;

            maxArea = max(maxArea, currArea);
            st.pop();
        }
        return maxArea;

    }
};
