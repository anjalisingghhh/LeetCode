class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> row(m, 0);
        vector<int> col(n, 0);

        // First pass: mark rows and columns that need to be zeroed
        for (int i = 0; i < m; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                // If element is zero, mark its row and column
                if (matrix[i][j] == 0) 
                {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        // Second pass: set cells to zero based on markers
        for (int i = 0; i < m; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                // If the row or column is marked, set cell to zero
                if (row[i] == 1 || col[j] == 1) 
                {
                    matrix[i][j] = 0;
                }
            }
        }




//------------------------------------------------------------------------------------------



        // // APPROACH - 01 (BRUTE FORCE APPROACH)
        // int rows = matrix.size();
        // int columns = matrix[0].size();

        // vector<int> r;
        // vector<int> c;

        // // Store the row and column of every original zero
        // for (int i = 0; i < rows; i++)
        // {
        //     for (int j = 0; j < columns; j++)
        //     {
        //         if (matrix[i][j] == 0)
        //         {
        //             r.push_back(i);
        //             c.push_back(j);
        //         }
        //     }
        // }

        // // Set corresponding rows and columns to zero
        // for (int i = 0; i < rows; i++)
        // {
        //     for (int j = 0; j < columns; j++)
        //     {
        //         for (int k = 0; k < r.size(); k++)
        //         {
        //             if (i == r[k] || j == c[k])
        //             {
        //                 matrix[i][j] = 0;
        //                 break;
        //             }
        //         }
        //     }
        // }
    }
};