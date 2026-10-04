class Solution {
public:
    int climbStairs(int n) 
    {
        long long a = 0;
        long long b = 1;

        for (int i = 0; i <= n; i++) 
        {
            long long c = a + b;
            a = b;
            b = c;
        }
        return a;
    }
};