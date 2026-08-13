class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int i = 0, j = 0, count = 0, maxCount = 0;
        while(i < nums.size())
        {
            if(nums[i] == 1)
            {
                count++;
            }
            else {
                count = 0;
            }
            maxCount = max(maxCount, count); 
            i++;
        }
        return maxCount;
        
    }
};