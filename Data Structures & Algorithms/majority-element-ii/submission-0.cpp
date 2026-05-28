class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
          unordered_map<int, int> valueMap;
          vector<int> majority;

        for(int idx = 0; idx < nums.size(); idx++)
        {
            valueMap[nums[idx]]++;
        }

        for(auto& value : valueMap)
        {
            
            if(value.second > nums.size() / 3)
            {
                majority.push_back(value.first);
            }
        }

        return majority;
    }
};