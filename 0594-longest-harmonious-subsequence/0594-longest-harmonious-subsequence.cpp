class Solution 
{
public:
    int findLHS(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int ans = 0;
        int n = nums.size();
        int i = 0;

        while (i < n) 
        {
            int num1 = nums[i];
            int cnt1 = 0;

            while (i < n && nums[i] == num1) 
            {
                cnt1++;
                i++;
            }
            int j = i;
            int cnt2 = 0;

            while (j < n && nums[j] == num1 + 1) 
            {
                cnt2++;
                j++;
            }

            if (cnt2 > 0)
                ans = max(ans, cnt1 + cnt2);
        }
        return ans;
    }
};