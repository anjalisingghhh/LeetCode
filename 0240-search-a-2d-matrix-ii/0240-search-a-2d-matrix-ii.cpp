class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int rows = matrix.size();
        int cols = matrix[0].size();
 
        int row = 0;
        int col = cols - 1;
 
        while (row < rows && col >= 0) 
        {
            int current = matrix[row][col];
 
            if (current == target) 
            {
                return true;
            }
 
            if (current > target) 
            {
                col--;
            } 
            else 
            {
                row++;
            }
        }
        return false;



//--------------------------------------------------------------------------------------------


        // // APPROACH - 01 BRUTE FORCE
        // int m = matrix.size();
        // int n = matrix[0].size();

        // for (int i = 0; i < m; i++) 
        // {
        //     for (int j = 0; j < n; j++) 
        //     {
        //         if (matrix[i][j] == target)
        //             return true;
        //     }
        // }
        // return false;
    }
};