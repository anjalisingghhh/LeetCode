class Solution {
public:
    int countCommas(int n) 
    {
        // APPROACH - 02 BRUTE FORCE
        int ans = 0;
        if(n <= 999)
            return 0;
        else
        {
            for(int i = 1000; i <= n; i++)
            {
                ans += 1;
            }
        }
        return ans;




//----------------------------------------------------------------------------------------------


        // // APPROACH - 01 OPTIMISED 
        // return max(0, n-999);
        
    }
};