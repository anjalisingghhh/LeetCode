class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) 
    {
        // APPROACH -- 02 OPTIMAL APPROACH
        int rows = mat.size();
        int cols = mat[0].size();
        int low = 0;
        int high = rows - 1;
 
        while (low < high) 
        {
            int mid = low + (high - low) / 2;
            int bestCol = 0;

            for (int col = 1; col < cols; col++) 
            {
                if (mat[mid][col] > mat[mid][bestCol]) 
                {
                    bestCol = col;
                }
            }
            
            if (mat[mid][bestCol] > mat[mid + 1][bestCol]) 
            {
                high = mid;
            } 
            else 
            {
                low = mid + 1;
            }
        }
 
        int bestCol = 0;
        for (int col = 1; col < cols; col++) 
        {
            if (mat[low][col] > mat[low][bestCol]) 
            {
                bestCol = col;
            }
        }
        return {low, bestCol};
        



//-----------------------------------------------------------------------------------------------------------



        // // APPROACH - 01 BRUTE FORCE APPROACH
        // int rows = mat.size();
        // int cols = mat[0].size();
 
        // for (int i = 0; i < rows; i++) 
        // {
        //     for (int j = 0; j < cols; j++) 
        //     {
        //         int up = -1;
        //         if (i > 0) 
        //         {
        //             up = mat[i - 1][j];
        //         }
 
        //         int down = -1;
        //         if (i + 1 < rows) 
        //         {
        //             down = mat[i + 1][j];
        //         }
 
        //         int left = -1;
        //         if (j > 0) 
        //         {
        //             left = mat[i][j - 1];
        //         }
 
        //         int right = -1;
        //         if (j + 1 < cols) 
        //         {
        //             right = mat[i][j + 1];
        //         }
 
        //         if (mat[i][j] > up && mat[i][j] > down && mat[i][j] > left && mat[i][j] > right) 
        //         {
        //             return {i, j};
        //         }
        //     }
        // }
        // return {-1, -1};
    }
};