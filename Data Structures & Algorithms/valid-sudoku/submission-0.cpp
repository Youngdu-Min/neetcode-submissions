class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<int> xSeen;
        unordered_set<int> ySeen;
        unordered_set<int> squareSeen;

        for(int x = 0; x < board.size(); x++)
        {
            xSeen = {};
            ySeen = {};
            squareSeen = {};

            for(int y = 0; y < board.size(); y++)
            {
                char xTarget = board[x][y];
                char yTarget = board[y][x];

                if(xSeen.find(xTarget) != xSeen.end() && xTarget != '.')
                {
                    cout << "xSeen [" << x << ", " << y << "] " << xTarget;
                    return false;
                }

                if(ySeen.find(yTarget) != ySeen.end() && yTarget != '.')
                {
                    cout << "ySeen [" << y << ", " << x << "] " << yTarget;
                    return false;
                }
                
                int squareA = x / 3 * 3 + y / 3;
                int squareB = x % 3 * 3  + y % 3;
                char squareTarget = board[squareA][squareB];
                cout << squareTarget << " ";
                if(squareSeen.find(squareTarget) != squareSeen.end() && squareTarget != '.')
                {
                    cout << "squareSeen [" << squareA << ", " << squareB << "] " << squareTarget;
                    return false;
                }

                xSeen.insert(board[x][y]);
                ySeen.insert(board[y][x]);
                squareSeen.insert(board[squareA][squareB]);
            }
        }

        return true;
    }
};
