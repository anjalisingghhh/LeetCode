class Solution {
public:
    long long countCommas(long long n) 
    {
        // APPROACH - 02
        long long ans = 0;
        long long p = 1000;

        while (p <= n) 
        {
            ans += n - p + 1;
            p *= 1000;
        }
        return ans;



//---------------------------------------------------------------------------------------------


        // // APPROACH - 01 BRUTE FORCE
        // long long count = 0;

        // for(int i = 1; i <= n; i++)
        // {
        //     int temp = i;
        //     while(temp >= 1000)
        //     {
        //         count++;
        //         temp /= 1000;
        //     }
        // }
        // return count;
    }
};