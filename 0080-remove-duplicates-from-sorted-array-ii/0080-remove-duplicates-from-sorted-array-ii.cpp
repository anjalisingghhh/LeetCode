class Solution 
{
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int n = nums.size();

        if (n <= 2)
            return n;

        int k = 2;

        for (int i = 2; i < n; i++) 
        {
            if (nums[i] != nums[k - 2]) 
            {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;


//-------------------------------------------------------------------------------------------------


        // // APPROACH - 01 BRUTE FORCE
        // int k = 0;
        // for (int i = 0; i < nums.size(); i++) 
        // {
        //     int count = 0;
        //     for (int j = 0; j < k; j++) 
        //     {
        //         if (nums[j] == nums[i])
        //             count++;
        //     }

        //     if (count < 2) 
        //         nums[k++] = nums[i];
        // }
        // return k;
    }
};