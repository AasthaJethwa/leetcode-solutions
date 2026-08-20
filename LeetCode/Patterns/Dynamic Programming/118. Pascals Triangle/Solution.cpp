class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for (int row = 1; row <= numRows; row++) {
            vector<int> ansRow;
            long long element = 1;

            ansRow.push_back(1);

            for (int col = 1; col < row; col++) {
                element = element * (row - col);
                element = element / col;

                ansRow.push_back(element);
            }

            ans.push_back(ansRow);
        }

        return ans;
    }
};