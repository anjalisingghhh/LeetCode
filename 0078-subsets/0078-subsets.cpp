class Solution {
public:
    void findingSubsets(vector<int>& nums, vector<vector<int>> &ans, vector<int>& current, int i)
    {
        if(i == nums.size())
        {
            ans.push_back(current);
            return;
        }    
        // including current ele
        current.push_back(nums[i]);
        findingSubsets(nums, ans, current, i+1);

        // excluding current ele
        current.pop_back();
        findingSubsets(nums, ans, current, i+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<int> current;
        vector<vector<int>> ans;

        findingSubsets(nums, ans, current, 0);
        return ans;
    }
 };