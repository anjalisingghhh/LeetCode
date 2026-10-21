class Solution {
public:
    // APPROACH - 03
    int countPrimes(int n) 
    {
        vector<bool> isPrime(n, true);
        int count = 0;

        for (int i = 2; i < n; i++) 
        {
            if (isPrime[i]) 
            {
                count++;
                for (long long j = 1LL * i * i; j < n; j += i) 
                {
                    isPrime[j] = false;
                }
            }
        }
        return count;
    }




//--------------------------------------------------------------------------------------------------



    // // APPROACH - 02
    // bool isPrime(int num) 
    // {
    //     if (num < 2)
    //         return false;

    //     for (int i = 2; i * i <= num; i++) 
    //     {
    //         if (num % i == 0)
    //             return false;
    //     }
    //     return true;
    // }

    // int countPrimes(int n) 
    // {
    //     int count = 0;

    //     for (int i = 2; i < n; i++) 
    //     {
    //         if (isPrime(i))
    //             count++;
    //     }
    //     return count;
    // }



//-------------------------------------------------------------------------------------------------



    // // APPROACH - 01 BRUTE FORCE
    // bool isPrime(int n) 
    // {
    //     if (n <= 1) 
    //         return false;
 
    //     for (int i = 2; i < n; i++) 
    //     {
    //         if (n % i == 0) 
    //             return false;
    //     }
    //     return true;
    // }

    // int countPrimes(int n) 
    // {
    //     int count = 0;
    //     for(int i = 0; i < n; i++)
    //     {
    //         if(isPrime(i))
    //             count++;
    //     }
    //     return count;
    // }
};