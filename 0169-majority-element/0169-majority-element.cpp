class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        // APPROACH - 02
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            int count = 1;

            for (int j = i + 1; j < n; j++)
            {
                if (nums[i] == nums[j])
                    count++;
        }

        if (count > n / 2)
            return nums[i];
    }

    return -1;





// ---------------------------------------------------------------------------------------


        // // APPROACH - 01
        // sort(nums.begin(), nums.end());
        // int n = nums.size()/2;
        // return nums[n];     
    }
};