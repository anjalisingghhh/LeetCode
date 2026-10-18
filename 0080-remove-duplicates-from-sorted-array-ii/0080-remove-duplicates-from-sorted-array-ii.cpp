class Solution 
{
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int k = 0;
        for (int i = 0; i < nums.size(); i++) 
        {
            int count = 0;
            for (int j = 0; j < k; j++) 
            {
                if (nums[j] == nums[i])
                    count++;
            }

            if (count < 2) 
                nums[k++] = nums[i];
        }
        return k;
    }
};