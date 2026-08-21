class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        // APPROACH - 02
        unordered_map<int, int> mpp;

        for (int i = 0; i < nums.size(); i++)
        {
            mpp[nums[i]]++;
        }

        vector<int> result;

        for (auto it : mpp)
        {
            if (it.second > nums.size() / 3)
            {
                result.push_back(it.first);
            }
        }
        return result;

//---------------------------------------------------------------------------------------------

        // // APPROACH - 01
        // int n = nums.size();
        // vector<int> result;

        // for (int i = 0; i < n; i++)
        // {
        //     int count = 1;

        //     for (int j = i + 1; j < n; j++)
        //     {
        //         if (nums[i] == nums[j])
        //             count++;
        //     }

        //     if (count > n / 3)
        //     {
        //         if (find(result.begin(), result.end(), nums[i]) == result.end())
        //         {
        //             result.push_back(nums[i]);
        //         }
        //     }
        // }
        // return result;
    }
};

