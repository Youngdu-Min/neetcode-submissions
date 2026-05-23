class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(), piles.end()), mid = (low + high) / 2;
        int result = high;
        while(low <= high)
        {
            int currHour = 0;
            mid = (low + high) / 2;
            for(int idx = 0; idx < piles.size(); idx++)
            {
                currHour += (piles[idx] + mid - 1) / mid;
                cout << (piles[idx] + mid - 1) / mid << endl;
            }
            cout << "low: " << low << " mid: " << mid << " high: " << high << " | " << currHour<< endl;
            if(currHour <= h)
            {
                high = mid - 1;
                result = mid;
            }
            else
            {
                low = mid + 1;
            }
        }

        return result;
    }
};
