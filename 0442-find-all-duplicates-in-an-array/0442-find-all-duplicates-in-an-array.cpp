class Solution 
{
public:
    // APPROACH - 04
    vector<int> findDuplicates(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        vector<int> ans;

        for (int i = 1; i < nums.size(); i++) 
        {
            if (nums[i] == nums[i - 1])
                ans.push_back(nums[i]);
        }
        return ans;
    }



//--------------------------------------------------------------------------------------------------



    // // APPROACH - 03
    // vector<int> findDuplicates(vector<int>& nums) 
    // {
    //     unordered_set<int> seen;
    //     vector<int> ans;

    //     for (int x : nums) 
    //     {
    //         if (seen.count(x))
    //             ans.push_back(x);
    //         else
    //             seen.insert(x);
    //     }
    //     return ans;
    // }




//--------------------------------------------------------------------------------------------------



    // // APPROACH - 02 
    // vector<int> findDuplicates(vector<int>& nums) 
    // {
    //     unordered_map<int,int> mp;
    //     vector<int> ans;

    //     for (int x : nums)
    //         mp[x]++;

    //     for (auto &p : mp) 
    //     {
    //         if (p.second == 2)
    //             ans.push_back(p.first);
    //     }
    //     return ans;
    // }



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
