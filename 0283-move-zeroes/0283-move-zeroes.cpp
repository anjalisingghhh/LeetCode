class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        // APPROACH - 02 (OPTIMISED)
        int i = 0, j = 0; 
        while(j < nums.size())
        {
            if(nums[j] != 0)
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                i++;
            }
            j++;

        }



//---------------------------------------------------------------------------------------

        // // APPROACH - 01 (BRUTE FORCE)
        // vector<int> temp(nums.size(),0);
        // int j = 0;
        // for(int i = 0; i < nums.size(); i++)
        // {
        //     if(nums[i] != 0)
        //     {
        //         temp[j++] = nums[i];
        //     }
        // }

        // for(int i = 0; i < nums.size(); i++)
        // {
        //     nums[i] = temp[i];
        // }      
    }
};