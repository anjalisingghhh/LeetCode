class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        long arraySum = 0, sum = 0;
        int n = nums.size();
        sum = (n*(n+1))/2;

        for(int i = 0; i < n; i++)
        {
            arraySum += nums[i];
        }
        return sum-arraySum;
    }
};