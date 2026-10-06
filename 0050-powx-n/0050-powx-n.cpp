class Solution {
public:
double myPow(double x, int n)
    {
        long long power = n;
        long double base = x;

        if (power < 0)
        {
            base = 1.0L / base;
            power = -power;
        }

        long double ans = 1.0L;

        while (power > 0)
        {
            if (power % 2 == 1)
                ans *= base;

            base *= base;
            power /= 2;
        }
        return (double)ans;
    }


//----------------------------------------------------------------------------------------------


    // // APPROACH - 02 = TIME LIMIT EXCEEDED/STACK OVERFLOW
    // double myPow(double x, int n)
    // {
    //     if (n == 0)
    //         return 1;

    //     if (n < 0)
    //         return (1 / x) * myPow(x, n + 1);
    
    //     return x * myPow(x, n - 1);
    // }



//----------------------------------------------------------------------------------------------


        // // APPROACH - 01 BRUTE FORCE = TIME LIMIT EXCEEDED/ STACK OVERFLOW
    // double myPow(double x, int n) 
    // {
        // long long power = n;

        // if (power < 0) 
        // {
        //     x = 1 / x;
        //     power = -power;
        // }
        // double ans = 1;
        
        // for (long long i = 1; i <= power; i++) 
        // {
        //     ans = ans * x;
        // }
        // return ans;
    // }
};