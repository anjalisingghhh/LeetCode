class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        // APPROACH - 01
        sort(nums.begin(), nums.end());
        int n = nums.size()/2;
        return nums[n];     
    }
};