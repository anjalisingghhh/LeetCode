class Solution {
public:
    int binarySearch(vector<int>& nums, int size, int target, int left, int right)
    {
        if(left > right) return -1;

        int mid = left + (right - left)/2;

        if(target == nums[mid])
            return mid;
        else if(target < nums[mid])
            return binarySearch(nums, size, target, left, mid-1);
        else
            return binarySearch(nums, size, target, mid+1, right);
    }

    int search(vector<int>& nums, int target) 
    {
        // APPROACH - 02 RECURSIVE APPROACH
        int size = nums.size();
        int index = binarySearch(nums, size, target, 0, size - 1);
        return index;
    }



//--------------------------------------------------------------------------------



    // // APPROACH - 01 ITERATIVE APPROACH
    // int search(vector<int>& nums, int target) 
    // {
        // int n = nums.size();
        // int start = 0;
        // int end = nums.size()-1;
        // int mid;

        // while(start <= end)
        // {
        //     mid = start + (end - start) / 2;            
            
        //     if(nums[mid] == target)
        //         return mid;
        //     else if(nums[mid] > target)
        //         end = mid - 1;
        //     else 
        //         start = mid+1;
        // }
        // return -1;
    //}
};