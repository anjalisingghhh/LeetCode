class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int rows = matrix.size();
        int columns = matrix[0].size();

        vector<int> r;
        vector<int> c;

        // Store the row and column of every original zero
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                if (matrix[i][j] == 0)
                {
                    r.push_back(i);
                    c.push_back(j);
                }
            }
        }

        // Set corresponding rows and columns to zero
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                for (int k = 0; k < r.size(); k++)
                {
                    if (i == r[k] || j == c[k])
                    {
                        matrix[i][j] = 0;
                        break;
                    }
                }
            }
        }
    }
};