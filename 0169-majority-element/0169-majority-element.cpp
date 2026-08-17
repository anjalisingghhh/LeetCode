class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        // APPROACH - 04
        int count = 0;
        int ele = 0;

        for(int i = 0; i < nums.size(); i++)
        {

            if(count == 0)
            {
                count++;
                ele = nums[i];
            }
            else if(nums[i] != ele)
            {
                count--;
            } 
            else {
                count++;
            }    
        }
        return ele;




// ---------------------------------------------------------------------------------------




        // // APPRAOCH - 03
        // unordered_map<int, int> mpp;
        // for (int i = 0; i < nums.size(); i++)
        // {
        //     mpp[nums[i]]++;
        // }

        // for (auto it : mpp)
        // {
        //     if (it.second > nums.size() / 2)
        //     {
        //         return it.first;
        //     }
        // }
        // return -1;




// ---------------------------------------------------------------------------------------



        // // APPROACH - 02
        // int n = nums.size();

        // for (int i = 0; i < n; i++)
        // {
        //     int count = 1;

        //     for (int j = i + 1; j < n; j++)
        //     {
        //         if (nums[i] == nums[j])
        //             count++;
        //     }

        //     if (count > n / 2)
        //         return nums[i];
        // }
        // return -1;



// ---------------------------------------------------------------------------------------


        // // APPROACH - 01
        // sort(nums.begin(), nums.end());
        // int n = nums.size()/2;
        // return nums[n];     
    }
};