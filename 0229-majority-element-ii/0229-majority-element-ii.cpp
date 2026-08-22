class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        // APPROACH - 02
        int n = nums.size(); 
        vector<int> result; 
        unordered_map<int, int> mpp;
        int mini = int(n / 3) + 1;
        
        for (int i = 0; i < n; i++) 
        {
            mpp[nums[i]]++;
            
            if (mpp[nums[i]] == mini) 
                result.push_back(nums[i]);
            
            if (result.size() == 2) 
                break;
        }
        return result;



//----------------------------------------------------------------------------


        // // APPROACH - 01
        // int n = nums.size(); 
        // vector<int> result;
        
        // for (int i = 0; i < n; i++) 
        // {
        //     if (result.size() == 0 || result[0] != nums[i]) 
        //     {
        //         int cnt = 0;    
        //         for (int j = 0; j < n; j++) 
        //         {
        //             if (nums[j] == nums[i]) 
        //                 cnt++;
        //         }

        //         if (cnt > (n / 3))
        //             result.push_back(nums[i]);
        //     }
        //     if (result.size() == 2) break;
        // }
        // return result;
    }
};

