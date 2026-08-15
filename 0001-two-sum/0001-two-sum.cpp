class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,int> temp;
        for(int i = 0; i < nums.size(); i++)
        {
            int first = nums[i];
            int moreNeeded = target - first;
            if(temp.find(moreNeeded) != temp.end())
            {
                return {i, temp[moreNeeded]};
            }
            temp[first] = i;
        }
        return {-1,-1};



//---------------------------------------------------------------------------------------

        // // APPROACH - 01 (BRUTE FORCE)
        // int n = nums.size();
        // vector<int> temp;
        // for(int i = 0; i < n; i++)
        // {
        //     for(int j = i+1; j < n; j++)
        //     {
        //         if(nums[i] + nums[j] == target)
        //         {
        //             temp.push_back(i);
        //             temp.push_back(j);
        //             return temp;   
        //         }
        //     }
        // }
        // return temp;
    }
};