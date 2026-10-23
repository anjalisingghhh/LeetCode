class Solution 
{
public:

    // APPROACH - 02 
    vector<int> findDuplicates(vector<int>& nums) 
    {
        unordered_map<int,int> mp;
        vector<int> ans;

        for (int x : nums)
            mp[x]++;

        for (auto &p : mp) 
        {
            if (p.second == 2)
                ans.push_back(p.first);
        }
        return ans;
    }



//--------------------------------------------------------------------------------------------------


    // APPROACH - 01 BRUTE FORCE
    // vector<int> findDuplicates(vector<int>& nums) 
    // {
    //     vector<int> ans;
    //     int n = nums.size();

    //     for (int i = 0; i < n; i++) 
    //     {
    //         int count = 0;
    //         for (int j = 0; j < n; j++) 
    //         {
    //             if (nums[i] == nums[j])
    //                 count++;
    //         }
    //         if (count == 2) 
    //         {
    //             if (find(ans.begin(), ans.end(), nums[i]) == ans.end())
    //                 ans.push_back(nums[i]);
    //         }
    //     }
    //     return ans;
    // }
};
