class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        // APPROACH - 02 OPTIMISED APPROACH
        int left = 0;
        int right = num;
        long long mid;

        while(left <= right)
        {
            mid = left + (right - left)/2;
            
            if(mid * mid == num)
                return true;
            else if(mid * mid < num)
                left = mid + 1;
            else 
                right = mid - 1;
        }
        return false;



//----------------------------------------------------------------------------------------------

        // // APPROACH - 01 BRUTE FORCE
        // for (long long i = 1; i * i <= num; i++) 
        // {
        //     if (i * i == num)
        //         return true;
        // }
        // return false;
    }
};