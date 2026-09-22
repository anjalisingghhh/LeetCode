class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) 
    {
        // APPROACH - 02 BINARY SEARCH
        int left = 1;
        int right = *max_element(nums.begin(), nums.end());

        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            int sum = 0;

            for (int i = 0; i < nums.size(); i++)
            {
                sum += (nums[i] + mid - 1) / mid;
            }

            if (sum <= threshold)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return left;




//----------------------------------------------------------------------------------------------




        // // APPROACH - 01
        // int maxElement = *max_element(nums.begin(), nums.end());

        // for (int divisor = 1; divisor <= maxElement; divisor++)
        // {
        //     int sum = 0;
        //     for (int i = 0; i < nums.size(); i++)
        //     {
        //         sum += (nums[i] + divisor - 1) / divisor;
        //     }
        //     if (sum <= threshold)
        //     {
        //         return divisor;
        //     }
        // }
        // return -1;
    }
};