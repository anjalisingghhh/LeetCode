class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        // APPROACH - 01
        vector<int> positive;
        vector<int> negative;

        for(int i = 0; i < nums.size();i++)
        {
            if(nums[i] > 0)
                positive.push_back(nums[i]);
            else
                negative.push_back(nums[i]);
        }

        int p = 0, n = 0, j = 0;

        while (p < positive.size() && n < negative.size())
        {
            nums[j++] = positive[p++];
            nums[j++] = negative[n++];
        }
        return nums;
    }
};