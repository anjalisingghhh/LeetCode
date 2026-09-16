class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        // APPROACH - 02 OPTIMISED APPROACH - BINARY SEARCH
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) 
        {
            int mid = (low + high) / 2;
            if (nums[mid] == target)
                return mid;

            if (nums[low] <= nums[mid]) 
            {
                if (nums[low] <= target && target < nums[mid]) 
                    high = mid - 1;
                else 
                    low = mid + 1;
            }

            else 
            {
                if (nums[mid] < target && target <= nums[high]) 
                    low = mid + 1;
                else 
                    high = mid - 1;
            }
        }
        return -1;




//----------------------------------------------------------------------------------------------


        // //APPROACH - 01 BRUTE FORCE
        // for (int i = 0; i < nums.size(); i++) 
        // {
        //     if (nums[i] == target) 
        //     {
        //         return i;
        //     }
        // }
        // return -1;        
    }
};