class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        // OPTIMISED APPROACH
        // long arraySum = 0, sum = 0;
        // int n = nums.size();
        // sum = (n*(n+1))/2;

        // for(int i = 0; i < n; i++)
        // {
        //     arraySum += nums[i];
        // }
        // return sum-arraySum;

//--------------------------------------------------------------------------------

        // APPROACH - 01 
        sort(nums.begin(), nums.end());

        int i = 0;

        while (i < nums.size())
        {
            if (nums[i] == i)
            {
                i++;
            }
            else
            {
                return i;
            }
        }
        return nums.size();
    }
};