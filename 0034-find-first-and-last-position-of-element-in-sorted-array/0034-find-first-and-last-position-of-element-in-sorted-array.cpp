class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        // Find first occurrence
        int left = 0;
        int right = nums.size() - 1;

        while(left <= right)
        {
            int mid = left + (right - left) / 2;

            if(nums[mid] >= target)
                right = mid - 1;
            else
                left = mid + 1;
        }

        int first = left;

        if(first == nums.size() || nums[first] != target)
            return {-1, -1};

        // Find position after last occurrence
        left = 0;
        right = nums.size() - 1;

        while(left <= right)
        {
            int mid = left + (right - left) / 2;

            if(nums[mid] > target)
                right = mid - 1;
            else
                left = mid + 1;
        }

        int last = left - 1;

        return {first, last};
    }
};

