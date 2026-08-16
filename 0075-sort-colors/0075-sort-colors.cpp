class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        // APPROACH - 02 (OPTIMISED = 3 POINTER'S APPROACH)
        int i = 0, k = 0, j = nums.size() - 1;

        while(k <= j)
        {
            if(nums[k] == 0)
            {
                int temp = nums[i];
                nums[i] = nums[k];
                nums[k] = temp;
                i++;
                k++;
            }
            else if(nums[k] == 2)
            {
                int temp = nums[j];
                nums[j] = nums[k];
                nums[k] = temp;
                j--;
            }
            else
                k++;
        }



//----------------------------------------------------------------------------------------


        // // APPROACH - 01 (BRUTE FORCE)
        // int count0 = 0, count1 = 0, count2 = 0;
        // for(int i = 0; i < nums.size(); i++)
        // {
        //     if(nums[i] == 0)
        //         count0++;
        //     else if(nums[i] == 1)
        //         count1++;
        //     else 
        //         count2++;
        // }

        // int j = 0;
        // while(count0 > 0)
        // {
        //     nums[j++] = 0;
        //     count0--;
        // }

        // while(count1 > 0)
        // {
        //     nums[j++] = 1;
        //     count1--;
        // }

        // while(count2 > 0)
        // {
        //     nums[j++] = 2;
        //     count2--;
        // } 
    }
};