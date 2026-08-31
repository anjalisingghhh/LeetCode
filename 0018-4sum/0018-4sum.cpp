class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {

//----------------------------------------------------------------------------------------------



        //APPROACH - 02 BETTER APPROACH
        int n = nums.size();
        set<vector<int>> st;  

        for (int i = 0; i < n; i++) 
        {
            for (int j = i + 1; j < n; j++) 
            {
                unordered_set<long long> seen;
                for (int k = j + 1; k < n; k++) 
                {
                    long long required = (long long)target - (long long)nums[i] - (long long)nums[j] - (long long)nums[k];
                    if (seen.count(required)) 
                    {
                        vector<int> temp = {nums[i], nums[j], nums[k], (int)required};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                    seen.insert(nums[k]);
                }
            }
        }
        return vector<vector<int>>(st.begin(), st.end());



//----------------------------------------------------------------------------------------------


        // // APPROACH - 01
        // int n = nums.size();
        // set<vector<int>> st;

        // for (int i = 0; i < n; i++) 
        // {
        //     for (int j = i + 1; j < n; j++) 
        //     {
        //         for (int k = j + 1; k < n; k++) 
        //         {
        //             for (int l = k + 1; l < n; l++) 
        //             {
        //                 long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];
        //                 if (sum == target) 
        //                 {
        //                     vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
        //                     sort(temp.begin(), temp.end());
        //                     st.insert(temp);
        //                 }
        //             }
        //         }
        //     }
        // }
        // return vector<vector<int>>(st.begin(), st.end());
    }
};